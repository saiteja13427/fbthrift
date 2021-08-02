/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ExtraService.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ExtraService.tcc"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace extra { namespace svc {
std::unique_ptr<apache::thrift::AsyncProcessor> ExtraServiceSvIf::getProcessor() {
  return std::make_unique<ExtraServiceAsyncProcessor>(this);
}

ExtraServiceSvIf::CreateMethodMetadataResult ExtraServiceSvIf::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<ExtraServiceAsyncProcessor>();
}


bool ExtraServiceSvIf::simple_function() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("simple_function");
}

folly::SemiFuture<bool> ExtraServiceSvIf::semifuture_simple_function() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_simple_function.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return simple_function();
}

folly::Future<bool> ExtraServiceSvIf::future_simple_function() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_simple_function.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_simple_function(), getInternalKeepAlive());
}

void ExtraServiceSvIf::async_tm_simple_function(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_simple_function.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_simple_function.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_simple_function();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_simple_function();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(simple_function());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void ExtraServiceSvIf::async_eb_throws_function(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  callback->exception(apache::thrift::TApplicationException("Function throws_function is unimplemented"));
}

bool ExtraServiceSvIf::throws_function2(bool /*param1*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("throws_function2");
}

folly::SemiFuture<bool> ExtraServiceSvIf::semifuture_throws_function2(bool p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_throws_function2.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return throws_function2(p_param1);
}

folly::Future<bool> ExtraServiceSvIf::future_throws_function2(bool p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_throws_function2.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_throws_function2(p_param1), getInternalKeepAlive());
}

void ExtraServiceSvIf::async_tm_throws_function2(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, bool p_param1) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_throws_function2.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_throws_function2.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_throws_function2(p_param1);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_throws_function2(p_param1);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(throws_function2(p_param1));
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void ExtraServiceSvIf::throws_function3(::std::map<::std::int32_t, ::std::string>& /*_return*/, bool /*param1*/, const ::std::string& /*param2*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("throws_function3");
}

folly::SemiFuture<::std::map<::std::int32_t, ::std::string>> ExtraServiceSvIf::semifuture_throws_function3(bool p_param1, const ::std::string& p_param2) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_throws_function3.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  ::std::map<::std::int32_t, ::std::string> ret;
  throws_function3(ret, p_param1, p_param2);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<::std::map<::std::int32_t, ::std::string>> ExtraServiceSvIf::future_throws_function3(bool p_param1, const ::std::string& p_param2) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_throws_function3.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_throws_function3(p_param1, p_param2), getInternalKeepAlive());
}

void ExtraServiceSvIf::async_tm_throws_function3(std::unique_ptr<apache::thrift::HandlerCallback<::std::map<::std::int32_t, ::std::string>>> callback, bool p_param1, const ::std::string& p_param2) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_throws_function3.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_throws_function3.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_throws_function3(p_param1, p_param2);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_throws_function3(p_param1, p_param2);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::map<::std::int32_t, ::std::string> _return;
        throws_function3(_return, p_param1, p_param2);
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void ExtraServiceSvIf::oneway_void_ret() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret");
}

folly::SemiFuture<folly::Unit> ExtraServiceSvIf::semifuture_oneway_void_ret() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_oneway_void_ret.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  oneway_void_ret();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_oneway_void_ret.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_oneway_void_ret(), getInternalKeepAlive());
}

void ExtraServiceSvIf::async_tm_oneway_void_ret(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_oneway_void_ret.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_oneway_void_ret.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_oneway_void_ret();
        apache::thrift::detail::si::async_tm_future_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_oneway_void_ret();
        apache::thrift::detail::si::async_tm_semifuture_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        oneway_void_ret();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void ExtraServiceSvIf::oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t /*param1*/, ::std::int32_t /*param2*/, ::std::int32_t /*param3*/, ::std::int32_t /*param4*/, ::std::int32_t /*param5*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret_i32_i32_i32_i32_i32_param");
}

folly::SemiFuture<folly::Unit> ExtraServiceSvIf::semifuture_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_oneway_void_ret_i32_i32_i32_i32_i32_param.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  oneway_void_ret_i32_i32_i32_i32_i32_param(p_param1, p_param2, p_param3, p_param4, p_param5);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_oneway_void_ret_i32_i32_i32_i32_i32_param.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_oneway_void_ret_i32_i32_i32_i32_i32_param(p_param1, p_param2, p_param3, p_param4, p_param5), getInternalKeepAlive());
}

void ExtraServiceSvIf::async_tm_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, ::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_oneway_void_ret_i32_i32_i32_i32_i32_param.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_oneway_void_ret_i32_i32_i32_i32_i32_param.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_oneway_void_ret_i32_i32_i32_i32_i32_param(p_param1, p_param2, p_param3, p_param4, p_param5);
        apache::thrift::detail::si::async_tm_future_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_oneway_void_ret_i32_i32_i32_i32_i32_param(p_param1, p_param2, p_param3, p_param4, p_param5);
        apache::thrift::detail::si::async_tm_semifuture_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        oneway_void_ret_i32_i32_i32_i32_i32_param(p_param1, p_param2, p_param3, p_param4, p_param5);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void ExtraServiceSvIf::async_eb_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> /*callback*/, const ::std::map<::std::string, ::std::int64_t>& /*param1*/, const ::std::set<::std::vector<::std::string>>& /*param2*/) {
  LOG(DFATAL) << "Function oneway_void_ret_map_setlist_param is unimplemented";
}

void ExtraServiceSvIf::oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& /*param1*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret_struct_param");
}

folly::SemiFuture<folly::Unit> ExtraServiceSvIf::semifuture_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_oneway_void_ret_struct_param.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  oneway_void_ret_struct_param(p_param1);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_oneway_void_ret_struct_param.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_oneway_void_ret_struct_param(p_param1), getInternalKeepAlive());
}

void ExtraServiceSvIf::async_tm_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const ::some::valid::ns::MyStruct& p_param1) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_oneway_void_ret_struct_param.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_oneway_void_ret_struct_param.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_oneway_void_ret_struct_param(p_param1);
        apache::thrift::detail::si::async_tm_future_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_oneway_void_ret_struct_param(p_param1);
        apache::thrift::detail::si::async_tm_semifuture_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        oneway_void_ret_struct_param(p_param1);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void ExtraServiceSvIf::oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& /*param1*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret_listunion_param");
}

folly::SemiFuture<folly::Unit> ExtraServiceSvIf::semifuture_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_oneway_void_ret_listunion_param.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  oneway_void_ret_listunion_param(p_param1);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_oneway_void_ret_listunion_param.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_oneway_void_ret_listunion_param(p_param1), getInternalKeepAlive());
}

void ExtraServiceSvIf::async_tm_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_oneway_void_ret_listunion_param.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_oneway_void_ret_listunion_param.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_oneway_void_ret_listunion_param(p_param1);
        apache::thrift::detail::si::async_tm_future_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_oneway_void_ret_listunion_param(p_param1);
        apache::thrift::detail::si::async_tm_semifuture_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        oneway_void_ret_listunion_param(p_param1);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

bool ExtraServiceSvNull::simple_function() {
  return 0;
}

bool ExtraServiceSvNull::throws_function2(bool /*param1*/) {
  return 0;
}

void ExtraServiceSvNull::throws_function3(::std::map<::std::int32_t, ::std::string>& /*_return*/, bool /*param1*/, const ::std::string& /*param2*/) {}

void ExtraServiceSvNull::oneway_void_ret() {
  return;
}

void ExtraServiceSvNull::oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t /*param1*/, ::std::int32_t /*param2*/, ::std::int32_t /*param3*/, ::std::int32_t /*param4*/, ::std::int32_t /*param5*/) {
  return;
}

void ExtraServiceSvNull::oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& /*param1*/) {
  return;
}

void ExtraServiceSvNull::oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& /*param1*/) {
  return;
}



const char* ExtraServiceAsyncProcessor::getServiceName() {
  return "ExtraService";
}

void ExtraServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<ExtraServiceSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void ExtraServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void ExtraServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

const ExtraServiceAsyncProcessor::ProcessMap& ExtraServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const ExtraServiceAsyncProcessor::ProcessMap ExtraServiceAsyncProcessor::kOwnProcessMap_ {
  {"simple_function", {&ExtraServiceAsyncProcessor::setUpAndProcess_simple_function<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_simple_function<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"throws_function", {&ExtraServiceAsyncProcessor::setUpAndProcess_throws_function<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_throws_function<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"throws_function2", {&ExtraServiceAsyncProcessor::setUpAndProcess_throws_function2<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_throws_function2<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"throws_function3", {&ExtraServiceAsyncProcessor::setUpAndProcess_throws_function3<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_throws_function3<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"oneway_void_ret", {&ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"oneway_void_ret_i32_i32_i32_i32_i32_param", {&ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_i32_i32_i32_i32_i32_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_i32_i32_i32_i32_i32_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"oneway_void_ret_map_setlist_param", {&ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_map_setlist_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_map_setlist_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"oneway_void_ret_struct_param", {&ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_struct_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_struct_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"oneway_void_ret_listunion_param", {&ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_listunion_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_listunion_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

}} // extra::svc
