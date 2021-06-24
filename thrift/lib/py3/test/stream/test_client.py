#!/usr/bin/env python3
# Copyright (c) Facebook, Inc. and its affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import asyncio
import unittest
from typing import AsyncGenerator, Tuple, Optional

from thrift.py3.client import ClientType, get_client
from thrift.py3.common import RpcOptions
from thrift.py3.server import (
    ServiceInterface,
    SocketAddress,
    ThriftServer,
)
from thrift.py3.test.included.included.types import Included
from thrift.py3.test.stream.clients import StreamTestService
from thrift.py3.test.stream.services import StreamTestServiceInterface
from thrift.py3.test.stream.types import FuncEx, StreamEx


class Handler(StreamTestServiceInterface):
    async def returnstream(
        self, i32_from: int, i32_to: int
    ) -> AsyncGenerator[int, None]:
        for i in range(i32_from, i32_to):
            yield i

    async def alwaysThrows(self) -> AsyncGenerator[int, None]:
        raise StreamEx()
        yield

    # Has to be set up this way because if there's a yield in
    # this function then it transforms the whole function into a generator
    async def streamthrows(self, t: bool) -> AsyncGenerator[int, None]:
        if t:
            raise FuncEx()
        else:
            return self.alwaysThrows()

    async def returnresponseandstream(
        self,
        foo: Included,
    ) -> Tuple[Included, AsyncGenerator[Included, None]]:
        resp = Included(from_=100, to=200)

        async def inner() -> AsyncGenerator[Included, None]:
            for x in range(foo.from_, foo.to):
                yield Included(from_=foo.from_, to=x)

        return (resp, inner())


# pyre-fixme[13]: Attribute `serve_task` is never initialized.
class TestServer:
    server: ThriftServer
    serve_task: asyncio.Task

    def __init__(
        self,
        ip: Optional[str] = None,
        handler: ServiceInterface = Handler(),  # noqa: B008
    ) -> None:
        self.server = ThriftServer(handler, ip=ip)

    async def __aenter__(self) -> SocketAddress:
        self.serve_task = asyncio.get_event_loop().create_task(self.server.serve())
        return await self.server.get_address()

    # pyre-fixme[2]: Parameter must be annotated.
    async def __aexit__(self, *exc_info) -> None:
        self.server.stop()
        await self.serve_task


class StreamClientTest(unittest.TestCase):
    def test_return_stream(self) -> None:
        loop = asyncio.get_event_loop()

        async def inner_test() -> None:
            async with TestServer(ip="::1") as sa:
                ip, port = sa.ip, sa.port
                assert ip and port
                async with get_client(
                    StreamTestService,
                    host=ip,
                    port=port,
                    client_type=ClientType.THRIFT_ROCKET_CLIENT_TYPE,
                ) as client:
                    stream = await client.returnstream(10, 1024)
                    res = [n async for n in stream]
                    self.assertEqual(res, list(range(10, 1024)))

        loop.run_until_complete(inner_test())

    def test_return_response_and_stream(self) -> None:
        loop = asyncio.get_event_loop()

        async def inner_test() -> None:
            async with TestServer(ip="::1") as sa:
                ip, port = sa.ip, sa.port
                assert ip and port
                async with get_client(
                    StreamTestService,
                    host=ip,
                    port=port,
                    client_type=ClientType.THRIFT_ROCKET_CLIENT_TYPE,
                ) as client:
                    # pyre-fixme[23]: may be a pyre bug?
                    resp, stream = await client.returnresponseandstream(
                        Included(from_=39, to=42)
                    )
                    self.assertEqual(resp, Included(from_=100, to=200))
                    expected_to = 39
                    async for n in stream:
                        self.assertEqual(n, Included(from_=39, to=expected_to))
                        expected_to += 1
                    self.assertEqual(expected_to, 42)

        loop.run_until_complete(inner_test())

    def test_return_stream_set_buffer_size(self) -> None:
        loop = asyncio.get_event_loop()

        async def inner_test() -> None:
            options = RpcOptions()
            options.chunk_buffer_size = 64
            async with TestServer(ip="::1") as sa:
                ip, port = sa.ip, sa.port
                assert ip and port
                async with get_client(
                    StreamTestService,
                    host=ip,
                    port=port,
                    client_type=ClientType.THRIFT_ROCKET_CLIENT_TYPE,
                ) as client:
                    stream = await client.returnstream(10, 1024, rpc_options=options)
                    res = [n async for n in stream]
                    self.assertEqual(res, list(range(10, 1024)))

        loop.run_until_complete(inner_test())
