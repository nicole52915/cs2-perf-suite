// cli.cpp — part of cs2-perf-suite.

#include "cs2perfsuite/cli.h"

#include <cstdio>

namespace cs2perfsuite {

Cli::Cli(const std::string& config_path)
    : config_path_(config_path) {}

void Cli::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cli::run() {
    if (verbose_) std::fprintf(stderr, "[cs2-perf-suite] cli: run\n");
    // core logic lives here
    return true;
}

}  // namespace cs2perfsuite
