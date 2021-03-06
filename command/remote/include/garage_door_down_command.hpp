//===--- garage_door_down_command.hpp - -------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_DOWN_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_DOWN_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "command.hpp"
#include "garage_door.hpp"

namespace headfirst {


  class GarageDoorDownCommand : public Command {

    const GarageDoor* garage_door_;

  public:
    explicit GarageDoorDownCommand( const GarageDoor* garage_door );
    void Execute() const;
  };


} //namespace headfirst
#endif
