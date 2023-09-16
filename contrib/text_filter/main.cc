#include <iostream>
#include <fstream>
#include <vector>

#include "text_filter.h"

std::vector<std::string> getFileLines(const std::string& filelist) {
    std::vector<std::string> lines;
    std::ifstream file(filelist);

    if (!file.is_open()) {
        std::cerr << "Error when opening file: " << filelist << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    return lines;
}

void processText(TextFilter& client, const std::string& text) {
    std::string message = client.check(text);

    std::cout << message << std::endl;
}

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " file.txt" << std::endl;
        return 1;
    }

    const std::string filelist = argv[1];
    std::vector<std::string> lines = getFileLines(filelist);

    // server address, grpc timeout
    TextFilter client("16.163.0.109:50050", 300);

    if (false == client.isInitializedSuccessfully()) {
        std::cerr << "Failed to initialized text filter." << std::endl;
    }

    // grpc is thread safe
    std::vector<std::thread> threads;
    for (const std::string& txt : lines) {
        threads.emplace_back(processText, std::ref(client), txt);
    }

    // wait thread join
    for (std::thread& thread : threads) {
        thread.join();
    }

    return 0;
}