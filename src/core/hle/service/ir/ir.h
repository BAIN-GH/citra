// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

namespace Service {

class Interface;

namespace IR {

/// Initialize IR service
void Init();

/// Shutdown IR service
void Shutdown();

/// Reload input devices. Used when input configuration changed
void ReloadInputDevices();

} // namespace IR
} // namespace Service
