#ifndef PHYSICSTHREAD_H
#define PHYSICSTHREAD_H

#include "Thread.h"

namespace LEEngine
{

class PhysicsThread : public Thread
{
public:
  void callback(MessageBus &messageBus);
};

} // namespace LEEngine

#endif