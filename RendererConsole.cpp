#include "RendererConsole.hpp"

#include "rlutil.h"

#include <iostream>
RendererConsole::RendererConsole() :
    cursor(std::make_pair(1, 1)) {}
void RendererConsole::render(const LifeSimulator& simulation)
{
    std::cout << "Rendering... cursor (" << cursor.first << ", " << cursor.second << ")" << std::endl;
    rlutil::cls();
}