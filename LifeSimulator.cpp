#include "LifeSimulator.hpp"

// #include <array>
#include <iostream>

LifeSimulator::LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY)
{
    width = sizeX;
    height = sizeY;
    std::cout << "Constructing Life Sim. width: " << width << "height: " << height << std::endl;
    for (decltype(width) row = 0; row < width; row++)
    {
        std::vector<bool> col;
        for (uint8_t c = 0; c < sizeY; c++)
        {
            col.push_back(false);
        };
        board.push_back(col);
    };
    std::cout << "board after initialization: " << board.size() << std::endl;
    toString();
}
void LifeSimulator::toString()
{
    for (int i = 0; i < board.size(); i++)
    {
        std::cout << i << ": [ ";
        for (int x : board[i])
        {
            std::cout << x << " ";
        }
        std::cout << " ]\n"
                  << std::endl;
    }
}

// void insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY);
// void update();

std::uint8_t LifeSimulator::getSizeX() const
{
    return width;
}
std::uint8_t LifeSimulator::getSizeY() const
{
    return height;
}
bool LifeSimulator::getCell(std::uint8_t x, std::uint8_t y) const
{
    return board[x][y];
}
