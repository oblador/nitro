///
/// JHybridImageFactorySpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridImageFactorySpec.hpp"
#include <NitroModules/JSIConverter+JNI.hpp>

namespace margelo::nitro::image {

  jni::local_ref<JHybridImageFactorySpec::jhybriddata> JHybridImageFactorySpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridImageFactorySpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridImageFactorySpec::initHybrid),
    });
  }

  size_t JHybridImageFactorySpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromFile(const std::string& path) {
    auto result = this->loadImageFromFileJNI(jni::make_jstring(path));
    return JNISharedPtr::make_shared_from_jni<JHybridImageSpec>(jni::make_global(result));
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromURL(const std::string& path) {
    auto result = this->loadImageFromURLJNI(jni::make_jstring(path));
    return JNISharedPtr::make_shared_from_jni<JHybridImageSpec>(jni::make_global(result));
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromSystemName(const std::string& path) {
    auto result = this->loadImageFromSystemNameJNI(jni::make_jstring(path));
    return JNISharedPtr::make_shared_from_jni<JHybridImageSpec>(jni::make_global(result));
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::bounceBack(const std::shared_ptr<margelo::nitro::image::HybridImageSpec>& image) {
    auto result = this->bounceBackJNI(std::static_pointer_cast<JHybridImageSpec>(image)->getJavaPart());
    return JNISharedPtr::make_shared_from_jni<JHybridImageSpec>(jni::make_global(result));
  }

  // JNI Properties
  

  // JNI Methods
  jni::local_ref<JHybridImageSpec::javaobject> JHybridImageFactorySpec::loadImageFromFileJNI(const jni::alias_ref<jni::JString>& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JHybridImageSpec::javaobject>(jni::alias_ref<jni::JString> /* path */)>("loadImageFromFile");
    return method(_javaPart, path);
  }
  jni::local_ref<JHybridImageSpec::javaobject> JHybridImageFactorySpec::loadImageFromURLJNI(const jni::alias_ref<jni::JString>& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JHybridImageSpec::javaobject>(jni::alias_ref<jni::JString> /* path */)>("loadImageFromURL");
    return method(_javaPart, path);
  }
  jni::local_ref<JHybridImageSpec::javaobject> JHybridImageFactorySpec::loadImageFromSystemNameJNI(const jni::alias_ref<jni::JString>& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JHybridImageSpec::javaobject>(jni::alias_ref<jni::JString> /* path */)>("loadImageFromSystemName");
    return method(_javaPart, path);
  }
  jni::local_ref<JHybridImageSpec::javaobject> JHybridImageFactorySpec::bounceBackJNI(const jni::alias_ref<JHybridImageSpec::javaobject>& image) {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JHybridImageSpec::javaobject>(jni::alias_ref<JHybridImageSpec::javaobject> /* image */)>("bounceBack");
    return method(_javaPart, image);
  }

  void JHybridImageFactorySpec::loadHybridMethods() {
    // Load base Prototype methods
    HybridImageFactorySpec::loadHybridMethods();
    // Override base Prototype methods with JNI methods
    registerHybrids(this, [](Prototype& prototype) {
      
      prototype.registerHybridMethod("loadImageFromFile", &JHybridImageFactorySpec::loadImageFromFileJNI);
      prototype.registerHybridMethod("loadImageFromURL", &JHybridImageFactorySpec::loadImageFromURLJNI);
      prototype.registerHybridMethod("loadImageFromSystemName", &JHybridImageFactorySpec::loadImageFromSystemNameJNI);
      prototype.registerHybridMethod("bounceBack", &JHybridImageFactorySpec::bounceBackJNI);
    });
  }

} // namespace margelo::nitro::image
