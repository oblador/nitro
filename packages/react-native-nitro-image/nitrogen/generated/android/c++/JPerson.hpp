///
/// JPerson.hpp
/// Wed Sep 11 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "Person.hpp"

#include <string>

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "Person" and the the Kotlin data class "Person".
   */
  struct JPerson final: public jni::JavaClass<JPerson> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/Person;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct Person by copying all values to C++.
     */
    [[maybe_unused]]
    Person toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldName = clazz->getField<jni::JString>("name");
      jni::local_ref<jni::JString> name = this->getFieldValue(fieldName);
      static const auto fieldAge = clazz->getField<double>("age");
      double age = this->getFieldValue(fieldAge);
      return Person(
        name->toStdString(),
        age
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JPerson::javaobject> fromCpp(const Person& value) {
      return newInstance(
        jni::make_jstring(value.name),
        value.age
      );
    }
  };

} // namespace margelo::nitro::image
