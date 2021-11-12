#include "PatternAcorn.hpp"
#include "PatternBlinker.hpp"
#include "PatternBlock.hpp"
#include "PatternGlider.hpp"
#include "PatternGosperGliderGun.hpp"
#include "RendererConsole.hpp"
#include "rlutil.h"

#include <iostream>
#include <thread>
//////////
// I could have combined these into one function, but I didn't want to deal with references and what not...
//////////
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
void animateBlock()
{
    LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);
    RendererConsole rc;
    PatternBlock pb;
    sim->insertPattern(pb, 50, 20);
    std::cout << "--- Block --- " << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    for (int i = 0; i < 10; i++)
    {
        rc.render(*sim);
        // std::this_thread::sleep_for(std::chrono::milliseconds(300));
        sim->update();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}
void animateGosperGliderGun()
{
    LifeSimulator* sim = new LifeSimulator(rlutil::tcols(), rlutil::trows() - 5);
    RendererConsole rc;
    PatternGosperGliderGun gg;
    sim->insertPattern(gg, 50, 20);
    std::cout << "--- Gosper Glider Gun --- " << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    for (int i = 0; i < 200; i++)
    {
        rc.render(*sim);
        // std::this_thread::sleep_for(std::chrono::milliseconds(300));
        sim->update();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}
int main()
{
    animateBlinker();
    rlutil::cls();
    animateAcorn();
    rlutil::cls();
    animateGlider();
    rlutil::cls();
    animateBlock();
    rlutil::cls();
    animateGosperGliderGun();
    rlutil::cls();
}
