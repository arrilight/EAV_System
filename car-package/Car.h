//
// Created by Anastasia Reprintseva on 2019-03-13.
//

#ifndef EAV_SYSTEM_CAR_H
#define EAV_SYSTEM_CAR_H


#include "hardware-interfaces/GPS.h"

class Car {
public:
    int id;
    CoordinatesInterface location;
    double currentElectricityLevel;
    std::string status;
};


#endif //EAV_SYSTEM_CAR_H
