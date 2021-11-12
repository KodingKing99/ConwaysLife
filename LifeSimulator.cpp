#include "LifeSimulator.hpp"

// #include <array>
#include <iostream>

LifeSimulator::LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY)
{
    width = sizeX;
    height = sizeY;
    for (decltype(width) row = 0; row < width; row++)
    {
        std::vector<bool> col;
        for (uint8_t c = 0; c < sizeY; c++)
        {
            col.push_back(false);
        };
        board.push_back(col);
    };
}
void LifeSimulator::toString()
{
    for (long unsigned int i = 0; i < board.size(); i++)
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

void LifeSimulator::insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY)
{
    auto patWidth = pattern.getSizeX();
    auto patHeight = pattern.getSizeY();
    for (int i = startX; i < startX + patWidth; i++)
    {
        for (int j = startY; j < startY + patHeight; j++)
        {
            if (pattern.getCell(static_cast<uint8_t>(i - startX), static_cast<uint8_t>(j - startY)))
            {
                board[i][j] = true;
            }
        }
    }
}
std::vector<std::pair<int, int>> LifeSimulator::checkNeighbors(uint8_t x, uint8_t y)
{
    std::vector<std::pair<int, int>> neighbors;
    // check right of cell
    // std::cout << "checking for cell ( " << static_cast<int>(x) << " , " << static_cast<int>(y) << " )" << std::endl;
    if (x + 1 < getSizeX())
    {
        neighbors.push_back(std::make_pair(x + 1, y));
    }
    // check right lower diag of cell
    if (x + 1 < getSizeX() && y + 1 < getSizeY())
    {
        neighbors.push_back(std::make_pair(x + 1, y + 1));
    }
    // check below
    if (y + 1 < getSizeY())
    {
        neighbors.push_back(std::make_pair(x, y + 1));
    }
    // left  lower diag
    if (x > 1 && y + 1 < getSizeY())
    {
        neighbors.push_back(std::make_pair(x - 1, y + 1));
    }
    // left
    if (x > 1)
    {
        neighbors.push_back(std::make_pair(x - 1, y));
    }
    // left upper diag
    if (x > 1 && y > 1)
    {
        neighbors.push_back(std::make_pair(x - 1, y - 1));
    }
    // above
    if (y > 1)
    {
        neighbors.push_back(std::make_pair(x, y - 1));
    }
    // right upper diag
    if (x + 1 < getSizeX() && y > 1)
    {
        neighbors.push_back(std::make_pair(x + 1, y - 1));
    }
    return neighbors;
}
void LifeSimulator::update()
{
    // make copy of board
    auto newBoard = board;
    for (uint8_t i = 0; i < board.size(); i++)
    {
        for (uint8_t j = 0; j < board[i].size(); j++)
        {
            // get all the neighbors
            auto neighbors = checkNeighbors(i, j);
            bool isAlive = getCell(i, j);
            int aliveNeighbors = 0;
            for (auto neighbor : neighbors)
            {
                if (getCell(static_cast<uint8_t>(neighbor.first), static_cast<uint8_t>(neighbor.second)))
                {
                    aliveNeighbors++;
                }
            }
            if (isAlive && aliveNeighbors < 2)
            {
                // Cell dies
                newBoard[i][j] = false;
            }
            else if (isAlive && aliveNeighbors > 3)
            {
                // cell dies
                newBoard[i][j] = false;
            }
            else if (!isAlive && aliveNeighbors == 3)
            {
                newBoard[i][j] = true;
            }
        }
    }
    // at the end, set board back to new board
    board = newBoard;
}

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
