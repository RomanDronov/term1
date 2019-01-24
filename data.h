#ifndef DATA_H
#define DATA_H
#include<vector>
#include"airport.h"
class Data{
public:
    Data();
    std::vector<Airport> airports;
    void print();
};

#endif // DATA_H
