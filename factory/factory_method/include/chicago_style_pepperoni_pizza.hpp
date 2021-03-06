//===--- chicago_style_pepperoni_pizza.hpp - --------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_CHICAGO_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_CHICAGO_PEPPERONI_PIZZA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"

namespace headfirst {


  class ChicagoStylePepperoniPizza : public Pizza {

  public:
    ChicagoStylePepperoniPizza();
    void Cut() const;
  };


} //namespace headfirst
#endif
