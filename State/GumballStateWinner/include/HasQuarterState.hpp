//===--- HasQuarterState.hpp - ----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_HAS_QUARTER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_HAS_QUARTER_STATE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "GumballMachine.hpp"
#include "State.hpp"


class HasQuarterState : public State {

  //std::shared_ptr<GumballMachine> _gumballMachine;
  GumballMachine* _gumballMachine;
  int _random;

  HasQuarterState( const HasQuarterState& ); // Disable copy constructor
  void operator=( const HasQuarterState& ); // Disable assignment operator

public:
  //explicit HasQuarterState( std::shared_ptr<GumballMachine> gumballMachine );
  explicit HasQuarterState( GumballMachine* gumballMachine );
  void insertQuarter() const;
  void ejectQuarter() const;
  void turnCrank() const;
  void dispense();
  std::string toString() const;
};


#endif