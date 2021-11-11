#include "LifeSimulator.hpp"

// #include <array>
#include <iostream>

LifeSimulator::LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY) :
    sizeX(sizeX), sizeY(sizeY)
{
    std::cout << "Constructing Life Sim. sizeX: " << this->sizeX << sizeX << "sizeY: " << this->sizeY << sizeY << std::endl;
    for (uint8_t row = 0; row < sizeX; row++)
    {
        for (uint8_t col = 0; col < sizeY; col++)
        {
            board[row].push_back(false);
        };
    };
    std::cout << "board after initialization: " << board.size() << std::endl;
    // std::array<std::array<int, sizeY>, sizeX> board;
};

// void insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY);
// void update();

// std::uint8_t getSizeX() ;
// std::uint8_t getSizeY();
// bool getCell(std::uint8_t x, std::uint8_t y) const;
