#include "text_filter.h"

TextFilter::TextFilter(const std::string& server_address, int timeout_ms)
        : server_address_(server_address), timeout_ms_(timeout_ms) {

        grpc::ChannelArguments channel_args;
        channel_args.SetInt(GRPC_ARG_MAX_RECONNECT_BACKOFF_MS, 5000); // max reconnect backoff time£¨ms£©
        channel_args.SetInt(GRPC_ARG_INITIAL_RECONNECT_BACKOFF_MS, 1000); // init reconnect backoff time£¨ms£©

        // create gRPC channel
        channel_ = grpc::CreateCustomChannel(server_address_, grpc::InsecureChannelCredentials(), channel_args);
        if (!channel_) {
            std::cerr << "Failed to create gRPC channel." << std::endl;
            init_success_ = false;
            return;
        }

        stub_ = textapi::TextApi::NewStub(channel_);
        if (!stub_) {
            std::cerr << "Failed to create gRPC stub." << std::endl;
            init_success_ = false;
            return;
        }

        init_success_ = true;
 }

bool TextFilter::isInitializedSuccessfully() {
    return init_success_;
}

TextFilter::~TextFilter() {
    if (!channel_) {
        channel_.reset();
        channel_ = nullptr;
    }

    if (!stub_) {
        stub_.reset();
        stub_ = nullptr;
    }

    std::cout << "Text filter is closed." << std::endl;
}

std::string TextFilter::check(const std::string& text) {
    textapi::TextApiRequest request;
    request.set_text(text);

    try {
        grpc::ClientContext context;
        textapi::TextApiResponse response;

        // grpc time ms
        auto deadline = std::chrono::system_clock::now() + std::chrono::milliseconds(timeout_ms_);
        context.set_deadline(deadline);

        grpc::Status status = stub_->TextReq(&context, request, &response);

        if (status.ok()) {
            std::string message = response.message();

            //std::cout << "Response: " << message << std::endl;

            if (message == "pass" || message == "deny") {
                return message;
            }
            else {
                return "unknown";
            }
        }
        else if (status.error_code() == grpc::StatusCode::DEADLINE_EXCEEDED) {
            std::cout << "Request timed out" << std::endl;
            return "timeout";
        }
        else {
            std::cout << "Error: " << status.error_message() << std::endl;
            return status.error_message();
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return e.what();
    }
}
