//===--- condiment_decorator.hpp - ------------------------------*- C++ -*-===//
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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "condiment_decorator.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  CondimentDecorator::CondimentDecorator()
  {
    std::cout << "CondimentDecorator::CondimentDecorator" << std::endl;
  }
  CondimentDecorator::~CondimentDecorator()
  {
    std::cout << "CondimentDecorator::~CondimentDecorator" << std::endl;
  }
} //namespace headfirst
