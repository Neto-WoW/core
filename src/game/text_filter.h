#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <grpcpp/grpcpp.h>
#include "textapi.grpc.pb.h"

class TextFilter {
public:
    TextFilter(const std::string& server_address, int timeout_ms);
    ~TextFilter();

    std::string check(const std::string& text);
    bool isInitializedSuccessfully();

private:
    std::string server_address_;
    int timeout_ms_;
    bool init_success_;
    std::shared_ptr<grpc::Channel> channel_;
    std::unique_ptr<textapi::TextApi::Stub> stub_;
};