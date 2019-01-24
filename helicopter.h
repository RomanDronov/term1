#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "crafts.h"
#include<QString>
class Helicopter:public Craft {
   public:
    QString capacity;
    QString screw_size;
    bool airport_only;
    bool ground_land;
 /* Helicopter(QString capacity_in, QString crew_size_in,QString max_altitude_in,QString speed_in):Craft(max_altitude_in,speed_in) {
        capacity = capacity_in;
        speed=speed_in;
        max_altitude=max_altitude_in;
        screw_size = crew_size_in;

       // airport_only = airport_land_1;
       // ground_land = ground_1;
}*/
};
#endif // HELICOPTER_H
