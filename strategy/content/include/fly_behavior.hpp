//===--- fly_behavior.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_FLY_BEHAVIOR_HPP_
#define _HFDP_CPP_STRATEGY_FLY_BEHAVIOR_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  class FlyBehavior {

  public:
    virtual ~FlyBehavior();
    virtual void Fly() const = 0;
  };


} //namespace headfirst
#endif
