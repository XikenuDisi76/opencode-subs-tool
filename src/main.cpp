// main.cpp — entry point. Wires config and subsystems together.

#include "opencodesubstool/settings.h"
#include "opencodesubstool/accounts.h"
#include "opencodesubstool/trials.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    opencodesubstool::Settings settings = opencodesubstool::Settings::load_default();
    opencodesubstool::Accounts accounts(settings.store_path);
    opencodesubstool::Trials trials(settings.store_path);
    std::fprintf(stderr, "[opencode-subs-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
