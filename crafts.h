#ifndef CRAFT_H
#define CRAFT_H
#include<QString>
class Craft {
public:
    Craft(QString name_in,int max_altitude_in,int speed_in,int range);

    int max_altitude;
    int range;
    QString name;
    QString registration;
    QString airline;
    int speed;
//virtual void print();
};
#endif // CRAFT_H
