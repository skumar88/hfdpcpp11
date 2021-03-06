//===--- frozen_clams.cpp - -------------------------------------*- C++ -*-===//
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
#include "frozen_clams.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  std::string FrozenClams::ToString() const
  {
    std::cout << "FrozenClams::ToString" << std::endl;
    return "Frozen Clams from Chesapeake Bay";
  }
} //namespace headfirst
