// #include "LifeSimulator.hpp"
// #include "Renderer.hpp"
#include "PatternGlider.hpp"
#include "RendererConsole.hpp"
#include "rlutil.h"

#include <thread>
// #include <memory>

#include <iostream>
int main()
{
    std::cout << "Hello World!" << std::endl;
    LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);
    std::cout << "in main. width: " << sim->getSizeX() << " height: " << sim->getSizeY() << std::endl;
    RendererConsole rc;
    // auto a = sim*
    // rc.render(*sim);
    PatternGlider* pg = new PatternGlider();
    sim->insertPattern(*pg, 10, 10);
    for (int i = 0; i < 20; i++)
    {
        rc.render(*sim);
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        sim->update();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    // sim->checkNeighbors(sim->getSizeX(), sim->getSizeY());
    // rc->render(*sim);
    // RenderConsole* console = new RenderConsole(sim);
}
