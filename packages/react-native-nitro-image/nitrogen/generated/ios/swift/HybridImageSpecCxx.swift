///
/// HybridImageSpecCxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridImageSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridImageSpecCxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::image::bridge::swift`)
   * from `NitroImage-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.image.bridge.swift

  private static var __instances: [Int : HybridImageSpecCxx] = [:]
  private static var __counter: Int = 0

  public static func __putHybridImageSpecCxx(_ instance: HybridImageSpecCxx) -> Int {
    let id = __counter
    __counter += 1
    __instances[id] = instance
    return id
  }

  public static func __getHybridImageSpecCxxById(_ instanceId: Int) -> HybridImageSpecCxx {
    let instance = __instances[instanceId]!
    __instances.removeValue(forKey: instanceId)
    return instance
  }

  /**
   * Holds an instance of the `HybridImageSpec` Swift protocol.
   */
  private var __implementation: any HybridImageSpec

  /**
   * Create a new `HybridImageSpecCxx` that wraps the given `HybridImageSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: some HybridImageSpec) {
    self.__implementation = implementation
    /* no base class */
  }

  /**
   * Get the actual `HybridImageSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridImageSpec() -> any HybridImageSpec {
    return __implementation
  }

  /**
   * Contains a (weak) reference to the C++ HybridObject to cache it.
   */
  public var hybridContext: margelo.nitro.HybridContext {
    @inline(__always)
    get {
      return self.__implementation.hybridContext
    }
    @inline(__always)
    set {
      self.__implementation.hybridContext = newValue
    }
  }

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  @inline(__always)
  public var memorySize: Int {
    return self.__implementation.memorySize
  }

  // Properties
  public var size: ImageSize {
    @inline(__always)
    get {
      return self.__implementation.size
    }
  }
  
  public var pixelFormat: Int32 {
    @inline(__always)
    get {
      return self.__implementation.pixelFormat.rawValue
    }
  }
  
  public var someSettableProp: Double {
    @inline(__always)
    get {
      return self.__implementation.someSettableProp
    }
    @inline(__always)
    set {
      self.__implementation.someSettableProp = newValue
    }
  }

  // Methods
  @inline(__always)
  public func toArrayBuffer(format: Int32) -> Double {
    do {
      let __result = try self.__implementation.toArrayBuffer(format: margelo.nitro.image.ImageFormat(rawValue: format)!)
      return __result
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
  
  @inline(__always)
  public func saveToFile(path: std.string, onFinished: bridge.Func_void_std__string) -> Void {
    do {
      try self.__implementation.saveToFile(path: String(path), onFinished: { () -> ((String) -> Void) in
        let __sharedClosure = bridge.share_Func_void_std__string(onFinished)
        return { (__path: String) -> Void in
          __sharedClosure.pointee.call(std.string(__path))
        }
      }())
      return 
    } catch {
      let message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(message))")
    }
  }
}
