#include "Pattern.hpp"
#pragma once
#include <vector>
class PatternGosperGliderGun : public Pattern
{
  public:
    PatternGosperGliderGun();
    std::uint8_t getSizeX() const override;
    std::uint8_t getSizeY() const override;
    bool getCell(std::uint8_t x, std::uint8_t y) const override;

  protected:
    std::vector<std::vector<bool>> pattern;
};