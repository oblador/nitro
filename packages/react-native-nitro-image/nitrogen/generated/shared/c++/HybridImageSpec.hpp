///
/// HybridImageSpec.hpp
/// Thu Aug 01 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `ImageSize` to properly resolve imports.
namespace margelo::nitro::image { struct ImageSize; }
// Forward declaration of `PixelFormat` to properly resolve imports.
namespace margelo::nitro::image { enum class PixelFormat; }
// Forward declaration of `ImageFormat` to properly resolve imports.
namespace margelo::nitro::image { enum class ImageFormat; }

#include "ImageSize.hpp"
#include "PixelFormat.hpp"
#include "ImageFormat.hpp"
#include "Func_void_std__string.hpp"

namespace margelo::nitro::image {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `Image`
   * Inherit this class to create instances of `HybridImageSpec` in C++.
   * @example
   * ```cpp
   * class HybridImage: public HybridImageSpec {
   *   // ...
   * };
   * ```
   */
  class HybridImageSpec: public HybridObject {
    public:
      // Constructor
      explicit HybridImageSpec(): HybridObject(TAG) { }

      // Destructor
      ~HybridImageSpec() { }

    public:
      // Properties
      virtual ImageSize getSize() = 0;
      virtual PixelFormat getPixelFormat() = 0;
      virtual double getSomeSettableProp() = 0;
      virtual void setSomeSettableProp(double someSettableProp) = 0;

    public:
      // Methods
      virtual double toArrayBuffer(ImageFormat format) = 0;
      virtual void saveToFile(const std::string& path, const Func_void_std__string& onFinished) = 0;

    protected:
      // Tag for logging
      static constexpr auto TAG = "Image";

    private:
      // Hybrid Setup
      void loadHybridMethods() override;
  };

} // namespace margelo::nitro::image