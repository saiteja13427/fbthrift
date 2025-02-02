/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FooServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace test { namespace fixtures { namespace basic {
typedef apache::thrift::ThriftPresult<false> FooService_simple_rpc_pargs;
typedef apache::thrift::ThriftPresult<true> FooService_simple_rpc_presult;
}}} // test::fixtures::basic
template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpcT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {

  ::test::fixtures::basic::FooService_simple_rpc_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "simple_rpc",
                ::apache::thrift::FunctionQualifier::Unspecified);
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



void apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpc(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  simple_rpc(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpc(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = simple_rpcCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  simple_rpcImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpcImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        simple_rpcT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        simple_rpcT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        simple_rpcT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        simple_rpcT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpcCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "FooService.simple_rpc",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::sync_simple_rpc() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_simple_rpc(rpcOptions);
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::sync_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = simple_rpcCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      simple_rpcImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_simple_rpc(returnState);
  });
}


folly::Future<folly::Unit> apache::thrift::Client<::test::fixtures::basic::FooService>::future_simple_rpc() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_simple_rpc(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::test::fixtures::basic::FooService>::semifuture_simple_rpc() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_simple_rpc(rpcOptions);
}

folly::Future<folly::Unit> apache::thrift::Client<::test::fixtures::basic::FooService>::future_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_simple_rpc, channel_);
  simple_rpc(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::test::fixtures::basic::FooService>::semifuture_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_simple_rpc, channel_);
  auto callback = std::move(callbackAndFuture.first);
  simple_rpc(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic::FooService>::header_future_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_simple_rpc, channel_);
  simple_rpc(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic::FooService>::header_semifuture_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_simple_rpc, channel_);
  auto callback = std::move(callbackAndFuture.first);
  simple_rpc(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpc(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  simple_rpc(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic::FooService>::recv_wrapped_simple_rpc(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::test::fixtures::basic::FooService_simple_rpc_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::recv_simple_rpc(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_simple_rpc(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::recv_instance_simple_rpc(::apache::thrift::ClientReceiveState& state) {
  recv_simple_rpc(state);
}

folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic::FooService>::recv_instance_wrapped_simple_rpc(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_simple_rpc(state);
}


