#include "PatternAcorn.hpp"
#include "PatternBlinker.hpp"
#include "PatternGlider.hpp"
#include "RendererConsole.hpp"
#include "rlutil.h"

#include <iostream>
#include <thread>
void animateBlinker()
{
    LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);
    RendererConsole rc;
    PatternBlinker pb;
    sim->insertPattern(pb, 50, 20);
    std::cout << "--- Blinker --- " << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    for (int i = 0; i < 40; i++)
    {
        rc.render(*sim);
        // std::this_thread::sleep_for(std::chrono::milliseconds(300));
        sim->update();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}
void animateAcorn()
{
    LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);
    RendererConsole rc;
    PatternAcorn pa;
    sim->insertPattern(pa, 50, 20);
    std::cout << "--- Acorn --- " << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    for (int i = 0; i < 70; i++)
    {
        rc.render(*sim);
        // std::this_thread::sleep_for(std::chrono::milliseconds(300));
        sim->update();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}
void animateGlider()
{
    LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);
    RendererConsole rc;
    PatternGlider pg;
    sim->insertPattern(pg, 50, 20);
    std::cout << "--- Glider --- " << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    for (int i = 0; i < 70; i++)
    {
        rc.render(*sim);
        // std::this_thread::sleep_for(std::chrono::milliseconds(300));
        sim->update();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}
int main()
{
    // std::cout << "Hello World!" << std::endl;
    // LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);
    // std::cout << "in main. width: " << sim->getSizeX() << " height: " << sim->getSizeY() << std::endl;
    // RendererConsole rc;

    animateBlinker();
    rlutil::cls();
    animateAcorn();
    rlutil::cls();
    animateGlider();
    rlutil::cls();
    // PatternGlider* pg = new PatternGlider();
    // sim->insertPattern(*pg, 10, 10);
    // for (int i = 0; i < 300; i++)
    // {
    //     rc.render(*sim);
    //     // std::this_thread::sleep_for(std::chrono::milliseconds(300));
    //     sim->update();
    //     std::this_thread::sleep_for(std::chrono::milliseconds(150));
    // }
    // std::cout << "--- Acorn --- " << std::endl;
    // std::this_thread::sleep_for(std::chrono::milliseconds(500));
    // PatternAcorn* pa = new PatternAcorn();
    // sim->insertPattern(*pa, 50, 20);
    // for (int i = 0; i < 200; i++)
    // {
    //     rc.render(*sim);
    //     // std::this_thread::sleep_for(std::chrono::milliseconds(300));
    //     sim->update();
    //     std::this_thread::sleep_for(std::chrono::milliseconds(200));
    // }
    // LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);

    // delete sim;
    // delete pb;
}
