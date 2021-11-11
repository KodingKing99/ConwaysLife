#include "PatternGlider.hpp"

#include <iostream>
// class PatternGlider : public Pattern{
//     public:
//         PatternGlider();
//         std::uint8_t getSizeX() const override;
//         std::uint8_t getSizeY() const override;
//         bool getCell(std::uint8_t x, std::uint8_t y) const override;
//     private:
//         std::vector<std::vector<int>> pattern;
// };
PatternGlider::PatternGlider() :
    pattern({ { 0, 0, 1 },
              { 1, 0, 1 },
              { 0, 1, 1 } })
{
}
std::uint8_t PatternGlider::getSizeX() const
{
    return 3;
}
std::uint8_t PatternGlider::getSizeY() const
{
    return 3;
}
bool PatternGlider::getCell(std::uint8_t x, std::uint8_t y) const
{
    return true;
}
