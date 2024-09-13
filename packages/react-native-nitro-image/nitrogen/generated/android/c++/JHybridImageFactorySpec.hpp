///
/// HybridImageFactorySpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridImageFactorySpec.hpp"

// Forward declaration of `HybridImageSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpec; }

#include <memory>
#include "HybridImageSpec.hpp"
#include "JHybridImageSpec.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include <string>

namespace margelo::nitro::image {

  using namespace facebook;

  class JHybridImageFactorySpec final: public jni::HybridClass<JHybridImageFactorySpec, JHybridObject>,
                                       public HybridImageFactorySpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/HybridImageFactorySpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  private:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridImageFactorySpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridImageFactorySpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridImageFactorySpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    

  public:
    // Methods
    std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromFile(const std::string& path) override;
    std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromURL(const std::string& path) override;
    std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromSystemName(const std::string& path) override;
    std::shared_ptr<margelo::nitro::image::HybridImageSpec> bounceBack(const std::shared_ptr<margelo::nitro::image::HybridImageSpec>& image) override;

  public:
    // Properties (overriden by JNI)
    

  public:
    // Methods (overriden by JNI)
    jni::alias_ref<JHybridImageSpec::javaobject> loadImageFromFileJNI(const jni::alias_ref<jni::JString>& path);
    jni::alias_ref<JHybridImageSpec::javaobject> loadImageFromURLJNI(const jni::alias_ref<jni::JString>& path);
    jni::alias_ref<JHybridImageSpec::javaobject> loadImageFromSystemNameJNI(const jni::alias_ref<jni::JString>& path);
    jni::alias_ref<JHybridImageSpec::javaobject> bounceBackJNI(const jni::alias_ref<JHybridImageSpec::javaobject>& image);

  protected:
    // Override prototype to use JNI methods
    void loadHybridMethods() override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridImageFactorySpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::image
