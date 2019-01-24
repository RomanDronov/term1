#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include<QString>
#include"crafts.h"
class Aircraft:public Craft {
public:

   QString wing_size;
    int capacity;
    QString run_length;
    QString landing_length;
    Aircraft(QString name_in,int max_altitude_in,int speed_in,int capacity_in,int range_in):Craft(name_in,max_altitude_in,speed_in,range_in){
        name=name_in;
        capacity=capacity_in;
        max_altitude=max_altitude_in;
        speed=speed_in;
        range=range_in;
    }

   // void print();
};
#endif // AIRCRAFT_H
