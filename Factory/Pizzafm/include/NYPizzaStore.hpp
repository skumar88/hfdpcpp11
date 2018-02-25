//===--- NYPizzaStore.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_NY_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_NY_PIZZA_STORE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "Pizza.hpp"
#include "PizzaStore.hpp"


class NYPizzaStore : public PizzaStore {

public:
  std::shared_ptr<Pizza> createPizza( std::string type ) const;
};


#endif
