/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef APPLICATIONFONTPROVIDER_HPP
#define APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

struct Typography
{
  static const touchgfx::FontId DATEPICKER = 0;
  static const touchgfx::FontId COMMON_TITLE = 1;
  static const touchgfx::FontId COMMON_TEXT = 2;
  static const touchgfx::FontId CLOCK_YEAR = 3;
  static const touchgfx::FontId CLOCK_MONTH_DAY = 4;
  static const touchgfx::FontId GRAPH_Y_VALUE = 5;
  static const touchgfx::FontId HEARTRATE_AVERAGE_VALUE = 6;
  static const touchgfx::FontId HEARTRATE_STRING = 7;
  static const touchgfx::FontId HEARTRATE_STRING_VALUE = 8;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
  virtual touchgfx::Font* getFont(touchgfx::FontId fontId);
};

#endif /* APPLICATIONFONTPROVIDER_HPP */
