//===--- Iterator.hpp - -----------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_ITERATOR_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_ITERATOR_HPP_


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.

template <class T>
class Iterator {
public:
  virtual bool hasNext() const = 0;
  virtual std::shared_ptr<T> next() const = 0;
  virtual ~Iterator()
  {
    std::cout << "Iterator::~Iterator" << std::endl;
  }
};


#endif