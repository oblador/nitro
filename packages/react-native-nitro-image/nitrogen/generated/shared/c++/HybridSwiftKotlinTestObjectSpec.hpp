///
/// HybridSwiftKotlinTestObjectSpec.hpp
/// Mon Aug 19 2024
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

// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }
// Forward declaration of `OldEnum` to properly resolve imports.
namespace margelo::nitro::image { enum class OldEnum; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `HybridSwiftKotlinTestObjectSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridSwiftKotlinTestObjectSpec; }
// Forward declaration of `CallbackHolder` to properly resolve imports.
namespace margelo::nitro::image { struct CallbackHolder; }

#include <string>
#include <optional>
#include <unordered_map>
#include <vector>
#include "Car.hpp"
#include "Powertrain.hpp"
#include "OldEnum.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <functional>
#include <memory>
#include "HybridSwiftKotlinTestObjectSpec.hpp"
#include "CallbackHolder.hpp"
#include <future>

namespace margelo::nitro::image {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `SwiftKotlinTestObject`
   * Inherit this class to create instances of `HybridSwiftKotlinTestObjectSpec` in C++.
   * @example
   * ```cpp
   * class HybridSwiftKotlinTestObject: public HybridSwiftKotlinTestObjectSpec {
   *   // ...
   * };
   * ```
   */
  class HybridSwiftKotlinTestObjectSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridSwiftKotlinTestObjectSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridSwiftKotlinTestObjectSpec() { }

    public:
      // Properties
      virtual double getNumberValue() = 0;
      virtual void setNumberValue(double numberValue) = 0;
      virtual bool getBoolValue() = 0;
      virtual void setBoolValue(bool boolValue) = 0;
      virtual std::string getStringValue() = 0;
      virtual void setStringValue(const std::string& stringValue) = 0;
      virtual int64_t getBigintValue() = 0;
      virtual void setBigintValue(int64_t bigintValue) = 0;
      virtual std::optional<std::string> getStringOrUndefined() = 0;
      virtual void setStringOrUndefined(const std::optional<std::string>& stringOrUndefined) = 0;
      virtual std::optional<std::string> getStringOrNull() = 0;
      virtual void setStringOrNull(const std::optional<std::string>& stringOrNull) = 0;
      virtual std::optional<std::string> getOptionalString() = 0;
      virtual void setOptionalString(const std::optional<std::string>& optionalString) = 0;
      virtual std::unordered_map<std::string, double> getSomeMap() = 0;
      virtual void setSomeMap(const std::unordered_map<std::string, double>& someMap) = 0;
      virtual std::vector<std::string> getSomeArray() = 0;
      virtual void setSomeArray(const std::vector<std::string>& someArray) = 0;
      virtual std::optional<std::string> getSomeOptional() = 0;
      virtual void setSomeOptional(const std::optional<std::string>& someOptional) = 0;
      virtual std::optional<Car> getCar() = 0;
      virtual void setCar(const std::optional<Car>& car) = 0;
      virtual Powertrain getPowertrain() = 0;
      virtual void setPowertrain(Powertrain powertrain) = 0;
      virtual OldEnum getOldEnum() = 0;
      virtual void setOldEnum(OldEnum oldEnum) = 0;
      virtual std::shared_ptr<ArrayBuffer> getBuffer() = 0;
      virtual void setBuffer(const std::shared_ptr<ArrayBuffer>& buffer) = 0;

    public:
      // Methods
      virtual void simpleFunc() = 0;
      virtual double addNumbers(double a, double b) = 0;
      virtual std::string addStrings(const std::string& a, const std::string& b) = 0;
      virtual void multipleArguments(double num, const std::string& str, bool boo) = 0;
      virtual std::vector<double> getNumbers() = 0;
      virtual std::vector<std::string> getStrings() = 0;
      virtual void callCallback(const std::function<void()>& callback) = 0;
      virtual std::shared_ptr<ArrayBuffer> createNewBuffer(double size) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridSwiftKotlinTestObjectSpec> newTestObject() = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridSwiftKotlinTestObjectSpec> bounceBack(const std::shared_ptr<margelo::nitro::image::HybridSwiftKotlinTestObjectSpec>& obj) = 0;
      virtual void call(const CallbackHolder& args) = 0;
      virtual std::future<double> getNumberAsync() = 0;
      virtual std::future<std::string> getStringAsync() = 0;
      virtual std::future<Car> getCarAsync() = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "SwiftKotlinTestObject";
  };

} // namespace margelo::nitro::image
