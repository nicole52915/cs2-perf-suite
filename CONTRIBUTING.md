# Contributing

Issues and pull requests are welcome.

## Setup

```bash
git clone https://github.com/TestOwner/cs2-perf-suite.git
cd cs2-perf-suite
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

## Ground rules

- One logical change per PR.
- Build green before you push.
- No telemetry — local data stays local.
