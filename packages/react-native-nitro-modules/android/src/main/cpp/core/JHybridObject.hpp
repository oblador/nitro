//
//  JHybridObject.hpp
//  react-native-nitro
//
//  Created by Marc Rousavy on 14.07.24.
//

#pragma once

#include <fbjni/fbjni.h>
#include "HybridObject.hpp"

namespace margelo::nitro {

  using namespace facebook;

  struct JHybridObject: public jni::HybridClass<JHybridObject> {
   public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/HybridObject;";

   public:
    static void registerNatives();
  };

} // namespace margelo::nitro