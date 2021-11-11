// #include "LifeSimulator.hpp"
// #include "Renderer.hpp"
#include "RendererConsole.hpp"
// #include <memory>

#include <iostream>
int main()
{
    std::cout << "Hello World!" << std::endl;
    LifeSimulator* sim = new LifeSimulator(8, 8);
    std::cout << "in main. width: " << sim->getSizeX() << " height: " << sim->getSizeY() << std::endl;
    RendererConsole rc;
    // auto a = sim*
    rc.render(*sim);
    // rc->render(*sim);
    // RenderConsole* console = new RenderConsole(sim);
}
