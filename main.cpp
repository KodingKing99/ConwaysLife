// #include "LifeSimulator.hpp"
// #include "Renderer.hpp"
#include "RendererConsole.hpp"
// #include <memory>

#include <iostream>
int main()
{
    std::cout << "Hello World!" << std::endl;
    const uint8_t mysize = 8;
    // int a = 8;
    // std::cout << a << std::endl;
    LifeSimulator* sim = new LifeSimulator(8, 8);
    std::cout << "in main. width: " << sim->getSizeX() << " height: " << sim->getSizeY() << std::endl;
    RendererConsole* rc = new RendererConsole();
    // auto a = sim*
    rc->render(*sim);
    // RenderConsole* console = new RenderConsole(sim);
}
