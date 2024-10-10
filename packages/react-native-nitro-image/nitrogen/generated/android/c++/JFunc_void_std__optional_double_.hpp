///
/// JFunc_void_std__optional_double_.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <functional>

#include <functional>
#include <optional>

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * C++ representation of the callback Func_void_std__optional_double_.
   * This is a Kotlin `(maybe: Double?) -> Unit`, backed by a `std::function<...>`.
   */
  struct JFunc_void_std__optional_double_ final: public jni::HybridClass<JFunc_void_std__optional_double_> {
  public:
    static jni::local_ref<JFunc_void_std__optional_double_::javaobject> fromCpp(const std::function<void(std::optional<double> /* maybe */)>& func) {
      return JFunc_void_std__optional_double_::newObjectCxxArgs(func);
    }

  public:
    void call(jni::alias_ref<jni::JDouble> maybe) {
      return _func(maybe != nullptr ? std::make_optional(maybe->value()) : std::nullopt);
    }

  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/Func_void_std__optional_double_;";
    static void registerNatives() {
      registerHybrid({makeNativeMethod("call", JFunc_void_std__optional_double_::call)});
    }

  private:
    explicit JFunc_void_std__optional_double_(const std::function<void(std::optional<double> /* maybe */)>& func): _func(func) { }

  private:
    friend HybridBase;
    std::function<void(std::optional<double> /* maybe */)> _func;
  };

} // namespace margelo::nitro::image
