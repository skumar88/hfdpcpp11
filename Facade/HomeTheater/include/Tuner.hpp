#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_

//===--- Tuner.hpp - --------------------------------------------*- C++ -*-===//
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
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.



class Amplifier;

class Tuner {

  std::string _description;
  std::shared_ptr<Amplifier> _amplifier;
  double _frequency;

  Tuner( const Tuner& ); // Disable copy constructor
  void operator=( const Tuner& ); // Disable assignment operator

public:
  Tuner( std::string description, std::shared_ptr<Amplifier> amplifier );
  void on();
  void off();
  void setFrequency( double frequency );
  void setAm();
  void setFm();
  std::string toString() const;
};


#endif