# Rocket/RSocket

This document describes the mapping of the Rocket Thrift protocol over [RSocket](https://rsocket.io/about/protocol).

Keywords used by this document conform to the meanings in [RFC 2119](https://tools.ietf.org/html/rfc2119).

## Thrift Protocol Negotiation
### Rocket/RSocket over TLS
If ALPN is supported by both client and server - "rs" MUST be used as a RSocket protocol identifier.

### Other transport (e.g. THeader) to Rocket/RSocket upgrade
Once a non-Rocket Thrift connection is established - an upgrade to Rocket/RSocket SHOULD be attempted by the client.

To perform an upgrade a client MUST use the [RocketUpgrade](RocketUpgrade.thrift) interface immediatelly after opening the connection.

If the upgrade was successful - both server and client MUST treat the connection as a newly established RSocket connection.

## Versioning

Rocket follows a versioning scheme consisting of a single numeric version. This document describes protocol versions 8 through 10.

## Connection setup (Rocket protocol version 9+)
RSocket setup frame MUST use application/x-rocket-metadata+compact as Metadata Encoding MIME Type and application/x-rocket-payload as Data Encoding MIME Type.

RSocket setup payload MUST consist of a compact-serialized RequestSetupMetadata struct. Such compact-serialized RequestSetupMetadata MAY be prefixed by a 32-bit kRocketProtocolKey if Rocket client wants to remain compatible with Rocket server using Rocket protocol version 6-8.

If connection establishment was successful, the server MUST respond with a SetupResponse control message.

## Connection setup (Rocket protocol version 8)
RSocket setup payload MUST consist of a 32-bit kRocketProtocolKey followed by a compact-serialized RequestSetupMetadata struct.

If connection establishment was successful, the server MUST respond with a SetupResponse control message.

## RPCs

### Request-response

RSocket REQUEST_RESPONSE frame MUST be used for Thrift request-response RPC. REQUEST_RESPONSE frame metadata MUST contain a compact-serialized RequestRpcMetadata struct. REQUEST_RESPONSE frame payload MUST contain a request serialized using format determined by RequestRpcMetadata struct.

ERROR RSocket frame is only used for internal server errors. ERROR frame error data MUST contain a compact-serialized ResponseRpcError struct. ERROR frame SHOULD only use REJECTED, CANCELED or INVALID error codes.

PAYLOAD RSocket frame is used for responses, declared exceptions, and undeclared exceptions. PAYLOAD frame metadata MUST contain a compact-serialized ResponseRpcMetadata. PAYLOAD frame payload MUST contain response serialized using format determined by ResponseRpcMetadata.

### Request-no response

RSocket REQUEST_FNF frame MUST be used for Thrift request-no response RPC. REQUEST_FNF frame metadata MUST contain a compact-serialized RequestRpcMetadata struct. REQUEST_FNF frame payload MUST contain request serialized using format determined by RequestRpcMetadata struct.

### Request-stream

RSocket REQUEST_STREAM  frame MUST be used for Thrift request-stream RPC. REQUEST_STREAM  frame metadata MUST contain a compact-serialized RequestRpcMetadata struct. REQUEST_STREAM  frame payload MUST contain request serialized using format determined by RequestRpcMetadata struct.

#### First response

In Thrift request-stream contract first response is special and follows the same rules as first response of request-response Thrift RPC.

ERROR RSocket frame is only used for internal server errors. ERROR frame error data MUST contain a compact-serialized ResponseRpcError struct. ERROR frame SHOULD only use REJECTED, CANCELED or INVALID error codes.

PAYLOAD RSocket frame is used for responses, declared exceptions, and undeclared exceptions. PAYLOAD frame metadata MUST contain a compact-serialized ResponseRpcMetadata. PAYLOAD frame payload MUST contain response serialized using format determined by ResponseRpcMetadata.

If first response contains an exception sent in a PAYLOAD frame, it SHOULD have the Complete bit set.

#### Streaming responses

ERROR RSocket frame is only used for internal server errors. ERROR frame error data MUST contain a compact-serialized StreamRpcError struct. ERROR frame MUST only use REJECTED, CANCELED or INVALID error codes.

PAYLOAD RSocket frame is used for responses, declared exceptions, and undeclared exceptions. PAYLOAD frame metadata MUST contain compact-serialized StreamPayloadMetadata struct. PAYLOAD frame payload MUST contain response serialized using format determined by StreamPayloadMetadata struct.

If stream response contains an exception sent in a PAYLOAD frame, it SHOULD have the Complete bit set.

### Sink

TODO

## Control messages

All Control messages are sent via METADATA_PUSH RSocket frame.

### Control messages from the server
METADATA_PUSH frame sent by the server MUST contain a compact-serialized ServerPushMetadata struct.

### Control messages from the client
METADATA_PUSH frame sent by the client MUST contain a compact-serialized ClientPushMetadata struct.

## Interactions

TODO
