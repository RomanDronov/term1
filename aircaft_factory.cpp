#include "aircraft_factory.h"
#include <QDebug>
void Aircraft_factory::createCraft(Craft *airPtr, Airport &ap){
    ap.content.push_back(airPtr);
    qDebug()<<"craft-----";
}

void Aircraft_factory::createCraft(Aircraft* airPtr, Airport &ap){
    qDebug()<<"air----";
   createCraft(static_cast<Craft*> (airPtr), ap);
}
