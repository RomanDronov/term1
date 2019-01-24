#ifndef CRAFT_FACTORY_H
#define CRAFT_FACTORY_H
#include "airport.h"
#include "crafts.h"

class Craft_factory{
public:
    virtual void createCraft(Craft* airPtr,Airport &ap)=0;
};

#endif // CRAFT_FACTORY_H
