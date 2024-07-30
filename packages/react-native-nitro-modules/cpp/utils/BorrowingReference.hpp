//
//  BorrowingReference.hpp
//  NitroModules
//
//  Created by Marc Rousavy on 21.06.24.
//

#pragma once

namespace margelo::nitro { template<typename T> class OwningLock; }

#include <cstddef>

namespace margelo::nitro {

// forward-declaration to avoid duplicate symbols
template<typename T>
class OwningReference;

/**
 A `BorrowingReference<T>` is a weak reference to a pointer created by `OwningReference<T>`.
 It can be locked to gain a strong `OwningReference<T>` again if it has not been deleted yet.
 */
template<typename T>
class BorrowingReference final {
private:
  explicit BorrowingReference(const OwningReference<T>& ref);

public:
  BorrowingReference(): _value(nullptr), _isDeleted(nullptr), _strongRefCount(nullptr), _weakRefCount(nullptr), _mutex(nullptr) { }

  BorrowingReference(const BorrowingReference& ref):
    _value(ref._value),
    _isDeleted(ref._isDeleted),
    _strongRefCount(ref._strongRefCount),
    _weakRefCount(ref._weakRefCount),
    _mutex(ref._mutex) {
      // increment ref count after copy
      std::unique_lock lock(*_mutex);
      (*_weakRefCount)++;
  }

  BorrowingReference(BorrowingReference&& ref):
    _value(ref._value),
    _isDeleted(ref._isDeleted),
    _strongRefCount(ref._strongRefCount),
    _weakRefCount(ref._weakRefCount),
    _mutex(ref._mutex) {
      ref._value = nullptr;
      ref._isDeleted = nullptr;
      ref._strongRefCount = nullptr;
      ref._weakRefCount = nullptr;
  }

  BorrowingReference& operator=(const BorrowingReference& ref) {
    if (this == &ref) return *this;

    if (_weakRefCount != nullptr) {
      std::unique_lock lock(*_mutex);
      // destroy previous pointer
      (*_weakRefCount)--;
      maybeDestroy();
    }

    _value = ref._value;
    _isDeleted = ref._isDeleted;
    _strongRefCount = ref._strongRefCount;
    _weakRefCount = ref._weakRefCount;
    _mutex = ref._mutex;
    if (_weakRefCount != nullptr) {
      std::unique_lock lock(*_mutex);
      (*_weakRefCount)++;
    }

    return *this;
  }

  ~BorrowingReference() {
    if (_weakRefCount == nullptr) {
      // we are just a dangling nullptr.
      return;
    }
    
    std::unique_lock lock(*_mutex);

    (*_weakRefCount)--;
    maybeDestroy();
  }

  /**
   Try to lock the borrowing reference to an owning reference, or `nullptr` if it has already been deleted.
   */
  OwningReference<T> lock();

public:
  friend class OwningReference<T>;
  friend class OwningLock<T>;

private:
  void maybeDestroy() {
    if (*_strongRefCount == 0 && *_weakRefCount == 0) {
      // free the full memory if there are no more references at all
      delete _mutex;
      if (!(*_isDeleted)) {
        delete _value;
      }
      delete _isDeleted;
      delete _strongRefCount;
      delete _weakRefCount;
    }
  }

private:
  T* _value;
  bool* _isDeleted;
  size_t* _strongRefCount;
  size_t* _weakRefCount;
  std::mutex* _mutex;
};

} // namespace margelo::nitro
