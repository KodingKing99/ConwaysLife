// #include "LifeSimulator.hpp"
// #include "Renderer.hpp"
#include "PatternGlider.hpp"
#include "RendererConsole.hpp"
#include "rlutil.h"
// #include <memory>

#include <iostream>
int main()
{
    std::cout << "Hello World!" << std::endl;
    LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);
    std::cout << "in main. width: " << sim->getSizeX() << " height: " << sim->getSizeY() << std::endl;
    RendererConsole rc;
    // auto a = sim*
    rc.render(*sim);
    PatternGlider* pg = new PatternGlider();
    // rc->render(*sim);
    // RenderConsole* console = new RenderConsole(sim);
}
