//===--- ny_pizza_store.cpp - -----------------------------------*- C++ -*-===//
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
#include "ny_pizza_store.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <string>
#include <utility>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese_pizza.hpp"
#include "clam_pizza.hpp"
#include "ny_pizza_ingredient_factory.hpp"
#include "pepperoni_pizza.hpp"
#include "pizza.hpp"
#include "veggie_pizza.hpp"

namespace headfirst {


  std::unique_ptr< Pizza > NYPizzaStore::CreatePizza( std::string item ) const
  {
    std::cout << "NYPizzaStore::CreatePizza" << std::endl;

    std::unique_ptr< Pizza > pizza = nullptr;
    std::unique_ptr<NYPizzaIngredientFactory>
      ingredient_factory(new NYPizzaIngredientFactory());

    if( item.compare( "cheese" ) == 0 ) {
      pizza.reset(new CheesePizza(std::move(ingredient_factory)));
      pizza->SetName( "New York Style Cheese Pizza" );
    } else if( item.compare( "veggie" ) == 0 ) {
      pizza.reset(new VeggiePizza(std::move(ingredient_factory)));
      pizza->SetName( "New York Style Veggie Pizza" );
    } else if( item.compare( "clam" ) == 0 ) {
      pizza.reset(new ClamPizza(std::move(ingredient_factory)));
      pizza->SetName( "New York Style Clam Pizza" );
    } else if( item.compare( "pepperoni" ) == 0 ) {
      pizza.reset(new PepperoniPizza(std::move(ingredient_factory)));
      pizza->SetName( "New York Style Pepperoni Pizza" );
    }
    return pizza;
  }
} //namespace headfirst
