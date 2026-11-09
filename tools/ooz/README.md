# Offline archive decoder

This independent program is derived from [Powzix/ooz](https://github.com/powzix/ooz).
The distribution includes the corresponding source used for the executable.
The Valhalla installer passes one known compressed block on standard input.
The helper returns the decoded bytes on standard output and exits.
The modified decoder exports the original Kraken_Decompress routine and omits the upstream command line and proprietary library loader.
The adapter in main.cpp is part of this GPL-3.0-or-later tool.

Build on Windows x64 with Zig 0.14.1 from this folder.

```sh
zig c++ -std=c++14 -O2 -fms-extensions -Wno-unknown-pragmas -Wno-invalid-token-paste -I. decoder.cpp bitknit.cpp lzna.cpp main.cpp -o ooz-decode.exe
```
