//===--- simple_pizza_factory.hpp - -----------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SIMPLE_PIZZA_FACTORY_HPP_
#define _HFDP_CPP_SIMPLE_PIZZA_FACTORY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"

namespace headfirst {


  class SimplePizzaFactory {

  public:
    std::unique_ptr<Pizza> CreatePizza( std::string type ) const;
  };


} //namespace headfirst
#endif
