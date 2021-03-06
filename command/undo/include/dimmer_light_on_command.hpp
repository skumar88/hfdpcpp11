//===--- dimmer_light_on_command.hpp - --------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_ON_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "command.hpp"
#include "light.hpp"

namespace headfirst {


  class DimmerLightOnCommand : public Command {

    const Light* light_;
    mutable int prev_level_;

  public:
    explicit DimmerLightOnCommand( const Light* light );
    void Execute() const;
    void Undo() const;
  };


} //namespace headfirst
#endif
