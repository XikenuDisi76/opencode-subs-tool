// accounts — part of opencode-subs-tool.

#pragma once

#include <string>
#include <vector>

namespace opencodesubstool {

class Accounts {
public:
    explicit Accounts(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace opencodesubstool
