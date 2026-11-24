// monitor.cpp — part of cs2-perf-suite.

#include "cs2perfsuite/monitor.h"

#include <cstdio>

namespace cs2perfsuite {

Monitor::Monitor(const std::string& config_path)
    : config_path_(config_path) {}

void Monitor::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Monitor::run() {
    if (verbose_) std::fprintf(stderr, "[cs2-perf-suite] monitor: run\n");
    // core logic lives here
    return true;
}

}  // namespace cs2perfsuite
