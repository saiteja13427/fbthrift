/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.inheritance;

import java.util.*;

public class MyLeafReactiveBlockingWrapper  extends test.fixtures.inheritance.MyNodeReactiveBlockingWrapper
  implements MyLeaf {
  private final MyLeaf.Reactive _delegate;

  public MyLeafReactiveBlockingWrapper(MyLeaf.Reactive _delegate) {
    super(_delegate);
    this._delegate = _delegate;
  }

  public MyLeafReactiveBlockingWrapper(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.thrift.client.RpcClient> _rpcClient, Map<String, String> _headers, Map<String, String> _persistentHeaders) {
    this(new MyLeafReactiveClient(_protocolId, _rpcClient, _headers, _persistentHeaders));
  }

  @java.lang.Override
  public void close() {
    _delegate.dispose();
  }

  @java.lang.Override
  public void doLeaf() throws org.apache.thrift.TException {
      doLeafWrapper(com.facebook.thrift.client.RpcOptions.EMPTY);
  }

  @java.lang.Override
  public void doLeaf(
        com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      doLeafWrapper(rpcOptions);
  }

  @java.lang.Override
  public com.facebook.thrift.client.ResponseWrapper<Void> doLeafWrapper(
    com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return _delegate.doLeafWrapper(rpcOptions).block();
      } catch (Throwable t) {
        throw com.facebook.thrift.util.ExceptionUtil.wrap(t);
      }
  }

}