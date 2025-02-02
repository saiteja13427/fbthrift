/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.thrift.client.*;
import com.facebook.thrift.util.FutureUtil;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;
import reactor.core.publisher.Mono;

@SwiftGenerated
@Deprecated
public class MyServicePrioParentAsyncClientImpl extends AbstractThriftClient implements MyServicePrioParent.Async {

    // Method Handlers
    private ThriftMethodHandler pingMethodHandler;
    private ThriftMethodHandler pongMethodHandler;

    // Method Exceptions
    private static final Class[] pingExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] pongExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public MyServicePrioParentAsyncClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      this("MyServicePrioParent", channel, methods, headers, persistentHeaders, eventHandlers);
    }

    public MyServicePrioParentAsyncClientImpl(
        String serviceName,
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(serviceName, channel, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      pingMethodHandler = methodHandlerMap.get("ping");
      pongMethodHandler = methodHandlerMap.get("pong");
    }

    public MyServicePrioParentAsyncClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      this("MyServicePrioParent", headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId, methods);
    }

    public MyServicePrioParentAsyncClientImpl(
        String serviceName,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(serviceName, headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      pingMethodHandler = methodHandlerMap.get("ping");
      pongMethodHandler = methodHandlerMap.get("pong");
    }

    @java.lang.Override
    public void close() {
        super.close();
    }


    @java.lang.Override
    public ListenableFuture<Void> ping() {
        return ping(RpcOptions.EMPTY);
    }

    @java.lang.Override
    public ListenableFuture<Void> ping(
        RpcOptions rpcOptions) {
        return FutureUtil.transform(pingWrapper(rpcOptions));
    }

    @java.lang.Override
    public ListenableFuture<ResponseWrapper<Void>> pingWrapper(
        RpcOptions rpcOptions) {
        try {
          return executeWrapperWithOptions(pingMethodHandler, pingExceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }

    @java.lang.Override
    public ListenableFuture<Void> pong() {
        return pong(RpcOptions.EMPTY);
    }

    @java.lang.Override
    public ListenableFuture<Void> pong(
        RpcOptions rpcOptions) {
        return FutureUtil.transform(pongWrapper(rpcOptions));
    }

    @java.lang.Override
    public ListenableFuture<ResponseWrapper<Void>> pongWrapper(
        RpcOptions rpcOptions) {
        try {
          return executeWrapperWithOptions(pongMethodHandler, pongExceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }
}
