# SmolChat Android Release Notes

**Release Date:** 2026-04-10  
**Git Tag:** `v20260410-llama-b8739`  
**Commit:** `e393a41`

---

## 📦 APK Files

| File | Size | Description |
|------|------|-------------|
| `app-release.apk` | 104M | Release build (optimized) |
| `SmolChat-v20260410-llama-b8739.apk` | 104M | Versioned release copy |
| `app-debug.apk` | 126M | Debug build (with debugging symbols) |

---

## 🔄 llama.cpp Update

### Previous Version
- **Commit:** `66d65ec29` 
- **Tag:** Unknown

### New Version
- **Commit:** `d132f22fc`
- **Tag:** `b8739`
- **Changes:** ~200+ commits ahead

### Key Improvements for Gemma4 Support

The updated llama.cpp includes:

1. **Gemma4 Tokenizer Support** (`src/llama-vocab.cpp`)
   - Fixed tokenizer handling for Gemma 4 models
   - Added support for `<eos>`, `<turn|>`, and `<|tool_response>` tokens
   - Proper byte token encoding with `<0xXX>` format

2. **Architecture Updates**
   - HIP: CDNA4 (gfx950) architecture support for MI350X/MI355X
   - CUDA improvements for non-contiguous dequantize/convert kernels
   - Updated vendor libraries (miniaudio, cpp-httplib)

3. **Model Architecture Extensions** (`src/llama-arch.h`)
   - Gemma3n tensor support
   - ALTUP projection layers
   - Enhanced per-layer configurations

---

## 📋 Git History

```bash
e393a41 Update llama.cpp to b8739 (d132f22) for Gemma4 support  ← HEAD, tag: v20260410-llama-b8739
```

### llama.cpp Submodule Changes
```
Subproject commit updated:
  - from: 66d65ec29ba7c440cbc31b6f63b74a17b536ba65
  + to:   d132f22fc92f36848f7ccf2fc9987cd0b0120825 (b8739)
```

---

## 🔧 Build Information

**Build Command:**
```bash
./gradlew assembleRelease
```

**Build Time:** 2m 48s  
**Tasks Executed:** 30 executed, 110 up-to-date

**Environment:**
- **Gradle:** 8.13
- **Kotlin:** 2.0.0 / 2.1.0 (plugin)
- **Android Gradle Plugin:** 8.13.0
- **Java:** OpenJDK 21.0.10

---

## 📱 Installation

### Debug Build
```bash
adb install app/build/outputs/apk/debug/app-debug.apk
```

### Release Build (Recommended)
```bash
adb install SmolChat-v20260410-llama-b8739.apk
```

---

## 🎯 Gemma4 Model Usage

After installing the updated APK:

1. Download a Gemma4 GGUF model from Hugging Face
2. Place it in your device storage (e.g., `/Download/`)
3. Open SmolChat and add the model via "Add Model" button
4. Configure system prompt and inference parameters as needed

---

## ⚠️ Known Issues

- KSP version warning: `ksp-2.0.0-1.0.24 is too old for kotlin-2.1.0` (non-blocking)

---

**Build completed:** 2026-04-10 11:04 GMT+8  
**Release APK updated:** 2026-04-10 11:11 GMT+8
