//===--- veggie_pizza.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SIMPLE_FACTORY_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_VEGGIE_PIZZA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"

namespace headfirst {


  class VeggiePizza : public Pizza {
  public:
    VeggiePizza();
  };


} //namespace headfirst
#endif
