#include "Renderer.hpp"

#include <utility>
class RendererConsole : public Renderer
{
  public:
    RendererConsole();
    void render(const LifeSimulator& simulation) override;

  protected:
    std::pair<int, int> cursor;
};