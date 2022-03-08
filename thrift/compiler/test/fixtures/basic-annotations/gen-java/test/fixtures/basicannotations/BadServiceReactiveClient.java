/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import static com.facebook.swift.service.SwiftConstants.STICKY_HASH_KEY;

import java.util.*;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicLong;
import org.apache.thrift.protocol.*;
import org.apache.thrift.ClientPushMetadata;
import org.apache.thrift.InteractionCreate;
import org.apache.thrift.InteractionTerminate;
import com.facebook.thrift.client.ResponseWrapper;
import com.facebook.thrift.client.RpcOptions;
import com.facebook.thrift.util.Readers;

public class BadServiceReactiveClient 
  implements BadService.Reactive {
  private static final AtomicLong _interactionCounter = new AtomicLong(0);

  private final org.apache.thrift.ProtocolId _protocolId;
  private final reactor.core.publisher.Mono<? extends com.facebook.thrift.client.RpcClient> _rpcClient;
  private final Map<String, String> _headers;
  private final Map<String, String> _persistentHeaders;
  private final Set<Long> _activeInteractions;

  private static final java.util.Map<Short, com.facebook.thrift.payload.Reader> _bar_EXCEPTION_READERS = java.util.Collections.emptyMap();
  private static final java.util.Map<Short, com.facebook.thrift.payload.Reader> _foo_EXCEPTION_READERS_INT = java.util.Collections.emptyMap();

  static {
  }

  public BadServiceReactiveClient(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.thrift.client.RpcClient> _rpcClient) {
    
    this._protocolId = _protocolId;
    this._rpcClient = _rpcClient;
    this._headers = java.util.Collections.emptyMap();
    this._persistentHeaders = java.util.Collections.emptyMap();
    this._activeInteractions = ConcurrentHashMap.newKeySet();
  }

  public BadServiceReactiveClient(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.thrift.client.RpcClient> _rpcClient, Map<String, String> _headers, Map<String, String> _persistentHeaders) {
    this(_protocolId, _rpcClient, _headers, _persistentHeaders, new AtomicLong(), ConcurrentHashMap.newKeySet());
  }

  public BadServiceReactiveClient(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.thrift.client.RpcClient> _rpcClient, Map<String, String> _headers, Map<String, String> _persistentHeaders, AtomicLong interactionCounter, Set<Long> activeInteractions) {
    
    this._protocolId = _protocolId;
    this._rpcClient = _rpcClient;
    this._headers = _headers;
    this._persistentHeaders = _persistentHeaders;
    this._activeInteractions = activeInteractions;
  }

  @java.lang.Override
  public void dispose() {}

  private com.facebook.thrift.payload.Writer _createbarWriter() {
    return oprot -> {
      try {

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.thrift.payload.Reader _bar_READER = Readers.i32Reader();

  @java.lang.Override
  public reactor.core.publisher.Mono<com.facebook.thrift.client.ResponseWrapper<Integer>> barWrapper( final com.facebook.thrift.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("bar")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(getHeaders(rpcOptions))
                .setProtocol(_protocolId)
                .build();

            com.facebook.thrift.payload.ClientRequestPayload<Integer> _crp =
                com.facebook.thrift.payload.ClientRequestPayload.create(
                    _createbarWriter(),
                    _bar_READER,
                    _bar_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions).doOnNext(_p -> {if(_p.getException() != null) throw com.facebook.thrift.util.ExceptionUtil.propagate(_p);});
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Integer> bar( final com.facebook.thrift.client.RpcOptions rpcOptions) {
    return barWrapper( rpcOptions).map(_p -> _p.getData());
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Integer> bar() {
    return bar( com.facebook.thrift.client.RpcOptions.EMPTY);
  }


  public class BadInteractionImpl implements BadInteraction {
    private final long interactionId;

    BadInteractionImpl(long interactionId) {
      this.interactionId = interactionId;
    }

    private final java.util.Map<Short, com.facebook.thrift.payload.Reader> _foo_EXCEPTION_READERS = java.util.Collections.emptyMap();

    private com.facebook.thrift.payload.Writer _createfooWriter() {
      return oprot -> {
        try {

        } catch (Throwable _e) {
          throw reactor.core.Exceptions.propagate(_e);
        }
      };
    }

    private final com.facebook.thrift.payload.Reader _foo_READER = Readers.voidReader();

    public reactor.core.publisher.Mono<Void> foo() {
      return fooWrapper( com.facebook.thrift.client.RpcOptions.EMPTY).then();
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> foo(RpcOptions rpcOptions)  {
      return fooWrapper( rpcOptions).then();
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<ResponseWrapper<Void>> fooWrapper(RpcOptions rpcOptions)  {
      return _rpcClient
        .subscriberContext(ctx -> ctx.put(STICKY_HASH_KEY, interactionId))
        .flatMap(_rpc -> {
          String interactionName = "BadInteraction.foo";
          org.apache.thrift.RequestRpcMetadata.Builder _metadataBuilder = new org.apache.thrift.RequestRpcMetadata.Builder()
                  .setName(interactionName)
                  .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                  .setOtherMetadata(getHeaders(rpcOptions))
                  .setProtocol(_protocolId);

          if (_activeInteractions.contains(interactionId)) {
            _metadataBuilder.setInteractionId(interactionId);
          } else {
            _metadataBuilder.setInteractionCreate(
              new InteractionCreate.Builder()
                  .setInteractionId(interactionId)
                  .setInteractionName("BadInteraction")
                  .build());
            _metadataBuilder.setInteractionId(0L);
            _activeInteractions.add(interactionId);
          }

          org.apache.thrift.RequestRpcMetadata _metadata = _metadataBuilder.build();

          com.facebook.thrift.payload.ClientRequestPayload<Void> _crp =
              com.facebook.thrift.payload.ClientRequestPayload.create(
                  _createfooWriter(),
                  _foo_READER,
                  _foo_EXCEPTION_READERS_INT,
                  _metadata,
                  java.util.Collections.emptyMap());

          return _rpc
              .singleRequestSingleResponse(_crp, rpcOptions).doOnNext(_p -> {if(_p.getException() != null) throw com.facebook.thrift.util.ExceptionUtil.propagate(_p);});
        });
    }

    @java.lang.Override
    public void dispose() {
      _activeInteractions.remove(interactionId);
      _rpcClient
        .subscriberContext(ctx -> ctx.put(STICKY_HASH_KEY, interactionId))
        .flatMap(_rpc -> {
          InteractionTerminate term = new InteractionTerminate.Builder().setInteractionId(interactionId).build();
          ClientPushMetadata metadata = ClientPushMetadata.fromInteractionTerminate(term);
          return _rpc.metadataPush(metadata, com.facebook.thrift.client.RpcOptions.EMPTY);
        }).subscribe();
    }
  }

  public BadInteraction createBadInteraction() {
      return new BadInteractionImpl(_interactionCounter.incrementAndGet());
  }

  private Map<String, String> getHeaders(com.facebook.thrift.client.RpcOptions rpcOptions) {
      Map<String, String> headers = new HashMap<>();
      if (rpcOptions.getRequestHeaders() != null && !rpcOptions.getRequestHeaders().isEmpty()) {
          headers.putAll(rpcOptions.getRequestHeaders());
      }
      if (_headers != null && !_headers.isEmpty()) {
          headers.putAll(_headers);
      }
      if (_persistentHeaders != null && !_persistentHeaders.isEmpty()) {
          headers.putAll(_persistentHeaders);
      }
      return headers;
  }
}
