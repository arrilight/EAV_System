//
// Created by Anastasia Reprintseva on 2019-03-13.
//

#ifndef EAV_SYSTEM_CAR_H
#define EAV_SYSTEM_CAR_H


#include <string>
#include "../hardware-interfaces/GPS/GPS.h"

class Car {
public:
    int id;
    Coordinates location;
    double currentElectricityLevel;
    std::string status;
};

#endif //EAV_SYSTEM_CAR_H
