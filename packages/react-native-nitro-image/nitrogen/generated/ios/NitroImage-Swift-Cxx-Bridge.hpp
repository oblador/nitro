///
/// NitroImage-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declarations of C++ defined types
// Forward declaration of `HybridBaseSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridBaseSpec; }
// Forward declaration of `HybridChildSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridChildSpec; }
// Forward declaration of `HybridImageFactorySpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageFactorySpec; }
// Forward declaration of `HybridImageSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpec; }
// Forward declaration of `HybridTestObjectSwiftKotlinSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridTestObjectSwiftKotlinSpec; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }

// Forward declarations of Swift defined types
// Forward declaration of `HybridBaseSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridBaseSpecCxx; }
// Forward declaration of `HybridChildSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridChildSpecCxx; }
// Forward declaration of `HybridImageFactorySpecCxx` to properly resolve imports.
namespace NitroImage { class HybridImageFactorySpecCxx; }
// Forward declaration of `HybridImageSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridImageSpecCxx; }
// Forward declaration of `HybridTestObjectSwiftKotlinSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridTestObjectSwiftKotlinSpecCxx; }

// Include C++ defined types
#include "HybridBaseSpec.hpp"
#include "HybridChildSpec.hpp"
#include "HybridImageFactorySpec.hpp"
#include "HybridImageSpec.hpp"
#include "HybridTestObjectSwiftKotlinSpec.hpp"
#include "Person.hpp"
#include "Powertrain.hpp"
#include <NitroModules/PromiseHolder.hpp>
#include <functional>
#include <future>
#include <memory>
#include <optional>
#include <string>
#include <variant>
#include <vector>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::image::bridge::swift {

  // pragma MARK: std::function<void(const std::string& /* path */)>
  /**
   * Specialized version of `std::function<void(const std::string&)>`.
   */
  using Func_void_std__string = std::function<void(const std::string& /* path */)>;
  /**
   * Wrapper class for a `std::function<void(const std::string& / * path * /)>`, this can be used from Swift.
   */
  class Func_void_std__string_Wrapper {
  public:
    explicit Func_void_std__string_Wrapper(const std::function<void(const std::string& /* path */)>& func);
    explicit Func_void_std__string_Wrapper(std::function<void(const std::string& /* path */)>&& func);
    void call(std::string path) const;
    std::function<void(const std::string& /* path */)> function;
  };
  Func_void_std__string create_Func_void_std__string(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */, std::string), void(* NONNULL destroy)(void* NONNULL));
  std::shared_ptr<Func_void_std__string_Wrapper> share_Func_void_std__string(const Func_void_std__string& value);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridImageSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridImageSpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridImageSpec_ = std::shared_ptr<margelo::nitro::image::HybridImageSpec>;
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> create_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(size_t swiftReferenceId);
  size_t get_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(std__shared_ptr_margelo__nitro__image__HybridImageSpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ = std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>;
  std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec> create_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(size_t swiftReferenceId);
  size_t get_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ = std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>;
  std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec> create_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(size_t swiftReferenceId);
  size_t get_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ cppType);
  
  // pragma MARK: std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>>
  /**
   * Specialized version of `std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>>`.
   */
  using std__optional_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec__ = std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>>;
  std::optional<std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>> create_std__optional_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec__(const std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>& value);
  
  // pragma MARK: std::optional<std::string>
  /**
   * Specialized version of `std::optional<std::string>`.
   */
  using std__optional_std__string_ = std::optional<std::string>;
  std::optional<std::string> create_std__optional_std__string_(const std::string& value);
  
  // pragma MARK: std::vector<std::string>
  /**
   * Specialized version of `std::vector<std::string>`.
   */
  using std__vector_std__string_ = std::vector<std::string>;
  std::vector<std::string> create_std__vector_std__string_(size_t size);
  
  // pragma MARK: std::optional<std::vector<std::string>>
  /**
   * Specialized version of `std::optional<std::vector<std::string>>`.
   */
  using std__optional_std__vector_std__string__ = std::optional<std::vector<std::string>>;
  std::optional<std::vector<std::string>> create_std__optional_std__vector_std__string__(const std::vector<std::string>& value);
  
  // pragma MARK: std::vector<double>
  /**
   * Specialized version of `std::vector<double>`.
   */
  using std__vector_double_ = std::vector<double>;
  std::vector<double> create_std__vector_double_(size_t size);
  
  // pragma MARK: std::vector<Person>
  /**
   * Specialized version of `std::vector<Person>`.
   */
  using std__vector_Person_ = std::vector<Person>;
  std::vector<Person> create_std__vector_Person_(size_t size);
  
  // pragma MARK: std::vector<Powertrain>
  /**
   * Specialized version of `std::vector<Powertrain>`.
   */
  using std__vector_Powertrain_ = std::vector<Powertrain>;
  std::vector<Powertrain> create_std__vector_Powertrain_(size_t size);
  
  // pragma MARK: std::function<void(const std::vector<Powertrain>& /* array */)>
  /**
   * Specialized version of `std::function<void(const std::vector<Powertrain>&)>`.
   */
  using Func_void_std__vector_Powertrain_ = std::function<void(const std::vector<Powertrain>& /* array */)>;
  /**
   * Wrapper class for a `std::function<void(const std::vector<Powertrain>& / * array * /)>`, this can be used from Swift.
   */
  class Func_void_std__vector_Powertrain__Wrapper {
  public:
    explicit Func_void_std__vector_Powertrain__Wrapper(const std::function<void(const std::vector<Powertrain>& /* array */)>& func);
    explicit Func_void_std__vector_Powertrain__Wrapper(std::function<void(const std::vector<Powertrain>& /* array */)>&& func);
    void call(std::vector<Powertrain> array) const;
    std::function<void(const std::vector<Powertrain>& /* array */)> function;
  };
  Func_void_std__vector_Powertrain_ create_Func_void_std__vector_Powertrain_(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */, std::vector<Powertrain>), void(* NONNULL destroy)(void* NONNULL));
  std::shared_ptr<Func_void_std__vector_Powertrain__Wrapper> share_Func_void_std__vector_Powertrain_(const Func_void_std__vector_Powertrain_& value);
  
  // pragma MARK: std::optional<bool>
  /**
   * Specialized version of `std::optional<bool>`.
   */
  using std__optional_bool_ = std::optional<bool>;
  std::optional<bool> create_std__optional_bool_(const bool& value);
  
  // pragma MARK: std::optional<Powertrain>
  /**
   * Specialized version of `std::optional<Powertrain>`.
   */
  using std__optional_Powertrain_ = std::optional<Powertrain>;
  std::optional<Powertrain> create_std__optional_Powertrain_(const Powertrain& value);
  
  // pragma MARK: std::variant<std::string, double>
  /**
   * Wrapper struct for `std::variant<std::string, double>`.
   * std::variant cannot be used in Swift because of a Swift bug.
   * Not even specializing it works. So we create a wrapper struct.
   */
  struct std__variant_std__string__double_ {
    std::variant<std::string, double> variant;
    std__variant_std__string__double_(std::variant<std::string, double> variant);
    operator std::variant<std::string, double>() const;
    size_t index() const;
  };
  std__variant_std__string__double_ create_std__variant_std__string__double_(const std::string& value);
  std__variant_std__string__double_ create_std__variant_std__string__double_(double value);
  std::string get_std__variant_std__string__double__0(const std__variant_std__string__double_& variantWrapper);
  double get_std__variant_std__string__double__1(const std__variant_std__string__double_& variantWrapper);
  
  // pragma MARK: PromiseHolder<int64_t>
  /**
   * Specialized version of `PromiseHolder<int64_t>`.
   */
  using PromiseHolder_int64_t_ = PromiseHolder<int64_t>;
  PromiseHolder<int64_t> create_PromiseHolder_int64_t_();
  
  // pragma MARK: PromiseHolder<void>
  /**
   * Specialized version of `PromiseHolder<void>`.
   */
  using PromiseHolder_void_ = PromiseHolder<void>;
  PromiseHolder<void> create_PromiseHolder_void_();
  
  // pragma MARK: std::function<void()>
  /**
   * Specialized version of `std::function<void()>`.
   */
  using Func_void = std::function<void()>;
  /**
   * Wrapper class for a `std::function<void()>`, this can be used from Swift.
   */
  class Func_void_Wrapper {
  public:
    explicit Func_void_Wrapper(const std::function<void()>& func);
    explicit Func_void_Wrapper(std::function<void()>&& func);
    void call() const;
    std::function<void()> function;
  };
  Func_void create_Func_void(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */), void(* NONNULL destroy)(void* NONNULL));
  std::shared_ptr<Func_void_Wrapper> share_Func_void(const Func_void& value);
  
  // pragma MARK: std::optional<double>
  /**
   * Specialized version of `std::optional<double>`.
   */
  using std__optional_double_ = std::optional<double>;
  std::optional<double> create_std__optional_double_(const double& value);
  
  // pragma MARK: std::function<void(std::optional<double> /* maybe */)>
  /**
   * Specialized version of `std::function<void(std::optional<double>)>`.
   */
  using Func_void_std__optional_double_ = std::function<void(std::optional<double> /* maybe */)>;
  /**
   * Wrapper class for a `std::function<void(std::optional<double> / * maybe * /)>`, this can be used from Swift.
   */
  class Func_void_std__optional_double__Wrapper {
  public:
    explicit Func_void_std__optional_double__Wrapper(const std::function<void(std::optional<double> /* maybe */)>& func);
    explicit Func_void_std__optional_double__Wrapper(std::function<void(std::optional<double> /* maybe */)>&& func);
    void call(std::optional<double> maybe) const;
    std::function<void(std::optional<double> /* maybe */)> function;
  };
  Func_void_std__optional_double_ create_Func_void_std__optional_double_(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */, std::optional<double>), void(* NONNULL destroy)(void* NONNULL));
  std::shared_ptr<Func_void_std__optional_double__Wrapper> share_Func_void_std__optional_double_(const Func_void_std__optional_double_& value);
  
  // pragma MARK: std::optional<Person>
  /**
   * Specialized version of `std::optional<Person>`.
   */
  using std__optional_Person_ = std::optional<Person>;
  std::optional<Person> create_std__optional_Person_(const Person& value);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridChildSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridChildSpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridChildSpec_ = std::shared_ptr<margelo::nitro::image::HybridChildSpec>;
  std::shared_ptr<margelo::nitro::image::HybridChildSpec> create_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(size_t swiftReferenceId);
  size_t get_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(std__shared_ptr_margelo__nitro__image__HybridChildSpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridBaseSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::image::HybridBaseSpec>`.
   */
  using std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ = std::shared_ptr<margelo::nitro::image::HybridBaseSpec>;
  std::shared_ptr<margelo::nitro::image::HybridBaseSpec> create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(size_t swiftReferenceId);
  size_t get_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ cppType);

} // namespace margelo::nitro::image::bridge::swift
