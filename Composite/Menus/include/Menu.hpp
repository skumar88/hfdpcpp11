//===--- Menus.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "MenuComponent.hpp"


class Menu : public MenuComponent {

  std::string _name;
  std::string _description;
  mutable std::vector< std::shared_ptr<MenuComponent> > _menuComponents;

public:
  Menu( const std::string name, const std::string description );
  void add( std::shared_ptr<MenuComponent> menuComponent );
  void remove( std::shared_ptr<MenuComponent> menuComponent );
  std::shared_ptr<MenuComponent> getChild( int i ) const;
  std::string getName() const;
  std::string getDescription() const;
  void print() const;
};


#endif