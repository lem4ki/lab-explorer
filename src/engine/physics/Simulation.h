#ifndef SIMULATION_H
#define SIMULATION_H

#include <list>
#include "PhysicalBody.h"
#include "DynamicBody.h"
#include "../game/Scene.h"

namespace LEEngine
{

class Simulation
{
private:
  Scene *scene;
  std::list<PhysicalBody> physicalBodies;
  DynamicBody *player;

public:
  Simulation(Scene *scene);
  ~Simulation();
  int run();
  Vector getPlayerPosition();
  void walk(Direction direction);
  void jump();
};

} // namespace LEEngine

#endif
