# Valhalla DLSS & Frame Generation

An unofficial Windows graphics mod for **Assassin’s Creed Valhalla**, by **serial humanist**. The open beta targets the Steam 1.8.0 executable. It adds controls to the game's Graphics menu and works without ReShade.

**[Download the Windows installer](https://github.com/ssSssXS/Valhalla-DLSS-FG/releases/tag/v0.27-beta.1)** · [Инструкция на русском](README.ru.md)

### Install

1. Close Valhalla and run **Valhalla-DLSS-FG-Setup-0.27-beta.1.exe**. The offline installer finds Steam libraries automatically. Use **Обзор…** (Browse) to choose the folder containing `ACValhalla.exe` if needed.
2. Select **Установить** (Install). The installer checks the supported executable and backs up the files it changes. The menu patch is generated from your local game archive.
3. Start the game and open **Settings → Graphics**. Select your modes and press **Apply**.

| In-game choice | Result |
| --- | --- |
| DLSS → Quality or Balanced | DLSS Super Resolution |
| DLSS → DLAA | Neural anti-aliasing at native resolution |
| DLSS Frame Generation → ×2 | One generated frame between eligible rendered frames |
| Upscaling type Off + resolution scale 100% + native AA + FG ×2 | The game provides its own anti-aliasing while NVIDIA generates intermediate frames |

A fresh installation starts with DLSS and FG off. Existing mod preferences are preserved. DLSS SR and DLAA require a compatible GeForce RTX GPU. NVIDIA FG ×2 was tested on an RTX 4070 Ti. The 0.27 game check covered 3840×2160, switching from native AA to DLAA and back, and the Discovery Tour conversation with native AA and FG. Other game builds, display setups and render scales for native AA + FG are outside this beta's verified configuration.

### Restore

Close the game and use **Восстановить** (Restore) in the same installer. Keep the `ACVNativeDLSS.Setup` folder in the game installation until restore is complete. Restore returns changed game files to their pre-install state. A user-edited mod INI is preserved. If Steam or another mod has changed a managed file in the meantime, the installer identifies it before restoring. Save files are outside the installer's file set.

The Windows installer is unsigned. The release includes a SHA-256 checksum. It needs no separate Python installation.

### Credits

Mod author: **serial humanist**. DLSS, NGX, Streamline and Reflex are NVIDIA technologies. The mod uses MinHook. The separate offline menu decoder uses Powzix/ooz. License notices are accessible from the installer and installed in `ACVNativeDLSS/licenses`. Decoder source and build instructions are included under [tools/ooz](tools/ooz). Assassin’s Creed Valhalla is a Ubisoft title.
