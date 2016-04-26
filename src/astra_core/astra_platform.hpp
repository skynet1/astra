// This file is part of the Orbbec Astra SDK [https://orbbec3d.com]
// Copyright (c) 2015 Orbbec 3D
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Be excellent to each other.
#ifndef ASTRA_PLATFORM_H
#define ASTRA_PLATFORM_H

#define ASTRA_PLATFORM_WIN32 1
#define ASTRA_PLATFORM_UNIX 2
#define ASTRA_PLATFORM_DARWIN 3
#define ASTRA_PLATFORM_ANDROID 4

#if defined(_WIN32)
#include "win32/astra_platform_win32.hpp"
#elif defined(__ANDROID__) && defined(__arm__)
#include "android/astra_platform_android.hpp"
#elif defined(__linux__)
#include "unix/astra_platform_unix.hpp"
#elif defined(__APPLE__)
#include "darwin/astra_platform_darwin.hpp"
#else
#error "Unsupported platform!"
#endif

#endif /* ASTRA_PLATFORM_H */
