///
/// NitroImage-Swift-Cxx-Umbrella.hpp
/// Tue Aug 20 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `AnyMap` to properly resolve imports.
namespace NitroModules { class AnyMap; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `CallbackHolder` to properly resolve imports.
namespace margelo::nitro::image { struct CallbackHolder; }
// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `HybridImageSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpec; }
// Forward declaration of `HybridSwiftKotlinTestObjectSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridSwiftKotlinTestObjectSpec; }
// Forward declaration of `HybridTestObjectSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridTestObjectSpec; }
// Forward declaration of `ImageFormat` to properly resolve imports.
namespace margelo::nitro::image { enum class ImageFormat; }
// Forward declaration of `ImageSize` to properly resolve imports.
namespace margelo::nitro::image { struct ImageSize; }
// Forward declaration of `OldEnum` to properly resolve imports.
namespace margelo::nitro::image { enum class OldEnum; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `PixelFormat` to properly resolve imports.
namespace margelo::nitro::image { enum class PixelFormat; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }

// Include C++ defined types
#include "CallbackHolder.hpp"
#include "Car.hpp"
#include "HybridImageSpec.hpp"
#include "HybridSwiftKotlinTestObjectSpec.hpp"
#include "HybridTestObjectSpec.hpp"
#include "ImageFormat.hpp"
#include "ImageSize.hpp"
#include "OldEnum.hpp"
#include "Person.hpp"
#include "PixelFormat.hpp"
#include "Powertrain.hpp"
#include <NitroModules/AnyMap.hpp>
#include <NitroModules/ArrayBuffer.hpp>
#include <functional>
#include <future>
#include <memory>
#include <optional>
#include <string>
#include <tuple>
#include <unordered_map>
#include <variant>
#include <vector>

// C++ helpers for Swift
#include "NitroImage-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/PromiseHolder.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridImageSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridImageSpecCxx; }
// Forward declaration of `HybridSwiftKotlinTestObjectSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridSwiftKotlinTestObjectSpecCxx; }
// Forward declaration of `HybridTestObjectSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridTestObjectSpecCxx; }

// Include Swift defined types
#if __has_include("NitroImage-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "NitroImage".
#include "NitroImage-Swift.h"
#else
#error NitroImage's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "NitroImage", and try building the app first.
#endif
