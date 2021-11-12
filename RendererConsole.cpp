#include "RendererConsole.hpp"

#include "rlutil.h"

#include <iostream>
RendererConsole::RendererConsole() :
    cursor(std::make_pair(1, 1)) {}
void RendererConsole::render(const LifeSimulator& simulation)
{
    std::cout << "Rendering... cursor (" << cursor.first << ", " << cursor.second << ")" << std::endl;
    rlutil::cls();
    // rlutil::setColor(3);
    rlutil::setChar('x');
    rlutil::hidecursor();
    cursor.first += simulation.getSizeX();
    rlutil::locate(cursor.first, cursor.second);
    rlutil::showcursor();
    rlutil::setChar('x');
    cursor.second += simulation.getSizeY();
    rlutil::locate(cursor.first, cursor.second);
    rlutil::setChar('x');
    cursor.first -= simulation.getSizeX();
    rlutil::locate(cursor.first, cursor.second);
    rlutil::setChar('x');
    cursor.second += 2;
    // cursor.second -= simulation.getSizeY() / 2;
    rlutil::locate(cursor.first, cursor.second);
    rlutil::hidecursor();
    // go back to beginning
    cursor = std::make_pair(1, 1);
    for (uint8_t i = 0; i < simulation.getSizeX(); i++)
    {
        for (uint8_t j = 0; j < simulation.getSizeY(); j++)
        {
            if (simulation.getCell(i, j))
            {
                cursor = std::make_pair(i, j);
                rlutil::locate(cursor.first, cursor.second);
                rlutil::showcursor();
                rlutil::setChar('x');
                rlutil::hidecursor();
            }
        }
    }
    cursor = std::make_pair(1, 1);
    // cursor.first = simulation.getSizeX();
    // cursor.second += simulation.getSizeY() + 2;
    rlutil::locate(cursor.first, cursor.second);

    // cursor.first
    // std::cout << "rows: " << rlutil::trows() << " col: " << rlutil::tcols() << std::endl;
    // while (true)
    // {
    //     std::cout << "rows: " << rlutil::trows() << " col: " << rlutil::tcols() << std::endl;
    // }
}