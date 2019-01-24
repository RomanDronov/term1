#ifndef AIRCRAFT_FACTORY_H
#define AIRCRAFT_FACTORY_H
#include "craft_factory.h"
#include "aircraft.h"
#include "crafts.h"
class Aircraft_factory:public Craft_factory{
public:
   void createCraft(Craft *airPtr,Airport &ap);
   void createCraft(Aircraft* airPtr, Airport &ap);
};

#endif // AIRCRAFT_FACTORY_H
