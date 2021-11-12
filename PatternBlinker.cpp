#include "PatternBlinker.hpp"
PatternBlinker::PatternBlinker() :
    pattern({ { 0, 1, 0 },
              { 0, 1, 0 },
              { 0, 1, 0 } })
{
}
std::uint8_t PatternBlinker::getSizeX() const
{
    return 3;
}
std::uint8_t PatternBlinker::getSizeY() const
{
    return 3;
}
bool PatternBlinker::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}