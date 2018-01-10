//===--- StatisticsDisplay.hpp - --------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "WeatherData.hpp"

class StatisticsDisplay : private Observer, private DisplayElement {

  WeatherData* _weatherData;
  float _maxTemp;
  float _minTemp;
  float _tempSum;
  int _numReadings;

  StatisticsDisplay(const StatisticsDisplay&); // Disable copy constructor
  void operator=(const StatisticsDisplay&); // Disable assignment operator

public:
  explicit StatisticsDisplay(WeatherData* weatherData);
  ~StatisticsDisplay();
  void update(float temp, float humidity, float pressure);
  void display() const;
};

#endif