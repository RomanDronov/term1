#include "helicopter_factory.h"
void Helicopter_factory::createCraft(Craft *airPtr, Airport &ap){
    ap.content.push_back(airPtr);
}

void Helicopter_factory::createCraft(Helicopter* airPtr, Airport &ap){
   createCraft(static_cast<Craft*> (airPtr), ap);
}
