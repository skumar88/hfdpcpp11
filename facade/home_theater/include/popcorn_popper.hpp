//===--- popcorn_popper.hpp - -----------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_POPCORN_POPPER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_POPCORN_POPPER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  class PopcornPopper {

    std::string description_;

    // Disable copy constructor and assignment operator
    PopcornPopper( const PopcornPopper& ) = delete;
    void operator=( const PopcornPopper& ) = delete;

  public:
    PopcornPopper( std::string description);
    void TurnOn() const;
    void TurnOff() const;
    void Pop() const;
    std::string ToString() const;
  };


} //namespace headfirst
#endif
