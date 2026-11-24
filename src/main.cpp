// main.cpp — entry point. Wires config and subsystems together.

#include "cs2perfsuite/settings.h"
#include "cs2perfsuite/configs.h"
#include "cs2perfsuite/tuner.h"
#include "cs2perfsuite/monitor.h"
#include "cs2perfsuite/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    cs2perfsuite::Settings settings = cs2perfsuite::Settings::load_default();
    cs2perfsuite::Configs configs(settings.store_path);
    cs2perfsuite::Tuner tuner(settings.store_path);
    cs2perfsuite::Monitor monitor(settings.store_path);
    cs2perfsuite::Cli cli(settings.store_path);
    std::fprintf(stderr, "[cs2-perf-suite] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
