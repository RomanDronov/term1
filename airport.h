#ifndef AGREGATOR_H
#define AGREGATOR_H
#include"crafts.h"
#include <vector>
#include <QString>
class Airport{
public:
    QString param;
    std::vector<Craft*> content;
    Airport(QString param);
   // void print();
};

#endif // AGREGATOR_H
