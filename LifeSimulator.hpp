#include "Pattern.hpp"
#pragma once
#include <utility>
#include <vector>
class LifeSimulator
{
  public:
    LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY);
    void insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY);
    void update();
    std::uint8_t getSizeX() const;
    std::uint8_t getSizeY() const;
    bool getCell(std::uint8_t x, std::uint8_t y) const;
    std::vector<std::pair<int, int>> checkNeighbors(uint8_t x, uint8_t y);

  protected:
    std::uint8_t width;
    std::uint8_t height;
    // Potentially change bool to unsigned int, store it's helth/num of neighbors
    std::vector<std::vector<bool>> board;
    void toString();
    std::vector<std::pair<int, int>> changeList;
    void refreshBoard();
    // std::vector<std::pair<>>
};
