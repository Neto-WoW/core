// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: textapi.proto

#include "textapi.pb.h"
#include "textapi.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace textapi {

static const char* TextApi_method_names[] = {
  "/textapi.TextApi/TextReq",
};

std::unique_ptr< TextApi::Stub> TextApi::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TextApi::Stub> stub(new TextApi::Stub(channel, options));
  return stub;
}

TextApi::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_TextReq_(TextApi_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TextApi::Stub::TextReq(::grpc::ClientContext* context, const ::textapi::TextApiRequest& request, ::textapi::TextApiResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::textapi::TextApiRequest, ::textapi::TextApiResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TextReq_, context, request, response);
}

void TextApi::Stub::async::TextReq(::grpc::ClientContext* context, const ::textapi::TextApiRequest* request, ::textapi::TextApiResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::textapi::TextApiRequest, ::textapi::TextApiResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TextReq_, context, request, response, std::move(f));
}

void TextApi::Stub::async::TextReq(::grpc::ClientContext* context, const ::textapi::TextApiRequest* request, ::textapi::TextApiResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TextReq_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::textapi::TextApiResponse>* TextApi::Stub::PrepareAsyncTextReqRaw(::grpc::ClientContext* context, const ::textapi::TextApiRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::textapi::TextApiResponse, ::textapi::TextApiRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TextReq_, context, request);
}

::grpc::ClientAsyncResponseReader< ::textapi::TextApiResponse>* TextApi::Stub::AsyncTextReqRaw(::grpc::ClientContext* context, const ::textapi::TextApiRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTextReqRaw(context, request, cq);
  result->StartCall();
  return result;
}

TextApi::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TextApi_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TextApi::Service, ::textapi::TextApiRequest, ::textapi::TextApiResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TextApi::Service* service,
             ::grpc::ServerContext* ctx,
             const ::textapi::TextApiRequest* req,
             ::textapi::TextApiResponse* resp) {
               return service->TextReq(ctx, req, resp);
             }, this)));
}

TextApi::Service::~Service() {
}

::grpc::Status TextApi::Service::TextReq(::grpc::ServerContext* context, const ::textapi::TextApiRequest* request, ::textapi::TextApiResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace textapi
