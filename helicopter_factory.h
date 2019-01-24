#ifndef HELICOPTER_FACTORY_H
#define HELICOPTER_FACTORY_H
#include "crafts.h"
#include "craft_factory.h"
#include "helicopter.h"
class Helicopter_factory:public Craft_factory{
public:
   void createCraft(Craft *airPtr,Airport &ap);
   void createCraft(Helicopter* airPtr, Airport &ap);
};
#endif // HELICOPTER_FACTORY_H
