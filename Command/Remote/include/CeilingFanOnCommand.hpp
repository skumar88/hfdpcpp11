//===--- CeilingFanOnCommand.hpp - ------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_ON_COMMAND_HPP_

#include "Command.hpp"
#include "CeilingFan.hpp"

namespace HFDP {
  namespace Command {
    namespace Remote {

      class CeilingFanOnCommand : public Command {

        const CeilingFan* _ceilingFan;

      public:
        explicit CeilingFanOnCommand( const CeilingFan* ceilingFan );
        void execute() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
