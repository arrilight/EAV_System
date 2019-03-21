//
// Created by Anastasia Reprintseva on 2019-03-13.
//

#ifndef EAV_SYSTEM_CAR_H
#define EAV_SYSTEM_CAR_H


#include <string>
#include "../hardware-interfaces/GPS/GPS.h"

class Car {
private:
    double currentElectricityLevel;
    std::string status;
public:
    int id;
    std::string currentRoute;
    Coordinates location;
    explicit Car(int id);
    void move(Coordinates newCoordinates);
    std::string generateRoute(int index);
};

#endif //EAV_SYSTEM_CAR_H
