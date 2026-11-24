// configs — part of cs2-perf-suite.

#pragma once

#include <string>
#include <vector>

namespace cs2perfsuite {

class Configs {
public:
    explicit Configs(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace cs2perfsuite
