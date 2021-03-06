//===--- waitress.cpp - -----------------------------------------*- C++ -*-===//
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
#include "waitress.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  Waitress::Waitress( std::unique_ptr<MenuComponent> all_menus ) :
    all_menus_ (std::move(all_menus))
  {
    std::cout << "Waitress::Waitress" << std::endl;
  }
  void Waitress::PrintMenu() const
  {
    std::cout << "Waitress::PrintMenu" << std::endl;
    all_menus_->Print();
  }


} //namespace headfirst
