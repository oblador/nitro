//
//  JAnyMap.hpp
//  react-native-nitro
//
//  Created by Marc Rousavy on 14.07.24.
//

#pragma once

#include <fbjni/fbjni.h>
#include "AnyMap.hpp"

namespace margelo::nitro {

using namespace facebook;

/**
 * Represents a Promise implemented in Java.
 */
class JAnyMap : public jni::HybridClass<JAnyMap> {
public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/core/AnyMap;";

public:
    /**
     * Create a new, empty `AnyMap` from Java.
     */
    static jni::local_ref<JAnyMap::jhybriddata> initHybrid(jni::alias_ref<jhybridobject>) {
        return makeCxxInstance();
    }
    /**
     * Create a new `JAnyMap` from an existing `AnyMap`.
     */
    static jni::local_ref<JAnyMap::javaobject> create(const std::shared_ptr<AnyMap>& map) {
        return newObjectCxxArgs(map);
    }

private:
    JAnyMap() {
        _map = std::make_shared<AnyMap>();
    }
    JAnyMap(const std::shared_ptr<AnyMap>& map): _map(map) {
    }

protected:
    bool contains(const std::string& key) {
        return _map->contains(key);
    }
    void remove(const std::string& key) {
        _map->remove(key);
    }
    void clear() {
        _map->clear();
    }
protected:
    bool isNull(const std::string& key) {
        return _map->isNull(key);
    }
    bool isDouble(const std::string& key) {
        return _map->isDouble(key);
    }
    bool isBoolean(const std::string& key) {
        return _map->isBoolean(key);
    }
    bool isBigInt(const std::string& key) {
        return _map->isBigInt(key);
    }
    bool isString(const std::string& key) {
        return _map->isString(key);
    }
    bool isArray(const std::string& key) {
        return _map->isArray(key);
    }
    bool isObject(const std::string& key) {
        return _map->isObject(key);
    }
protected:
    double getDouble(const std::string& key) {
        return _map->getDouble(key);
    }
    bool getBoolean(const std::string& key) {
        return _map->getBoolean(key);
    }
    int64_t getBigInt(const std::string& key) {
        return _map->getBigInt(key);
    }
    std::string getString(const std::string& key) {
        return _map->getString(key);
    }
protected:
    void setDouble(const std::string& key, double value) {
        _map->setDouble(key, value);
    }
    void setBoolean(const std::string& key, bool value) {
        _map->setBoolean(key, value);
    }
    void setBigInt(const std::string& key, int64_t value) {
        _map->setBigInt(key, value);
    }
    void setString(const std::string& key, const std::string& value) {
        _map->setString(key, value);
    }

public:
    std::shared_ptr<AnyMap> getMap() const {
        return _map;
    }

private:
    friend HybridBase;
    using HybridBase::HybridBase;
    std::shared_ptr<AnyMap> _map;

public:
    static void registerNatives() {
      registerHybrid({
        makeNativeMethod("initHybrid", JAnyMap::initHybrid),
        makeNativeMethod("contains", JAnyMap::contains),
        makeNativeMethod("remove", JAnyMap::remove),
        makeNativeMethod("clear", JAnyMap::contains),
        makeNativeMethod("isNull", JAnyMap::isNull),
        makeNativeMethod("isDouble", JAnyMap::isDouble),
        makeNativeMethod("isBoolean", JAnyMap::isBoolean),
        makeNativeMethod("isBigInt", JAnyMap::isBigInt),
        makeNativeMethod("isString", JAnyMap::isString),
        makeNativeMethod("isArray", JAnyMap::isArray),
        makeNativeMethod("isObject", JAnyMap::isObject),
        makeNativeMethod("getDouble", JAnyMap::getDouble),
        makeNativeMethod("getBoolean", JAnyMap::getBoolean),
        makeNativeMethod("getBigInt", JAnyMap::getBigInt),
        makeNativeMethod("getString", JAnyMap::getString),
        makeNativeMethod("setDouble", JAnyMap::setDouble),
        makeNativeMethod("setBoolean", JAnyMap::setBoolean),
        makeNativeMethod("setBigInt", JAnyMap::setBigInt),
        makeNativeMethod("setString", JAnyMap::setString),
      });
    }
};


} // namespace margelo::nitro