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
    void getNextEdge(int currentEdge);
public:
    explicit Car(int id);
    int id;
    Coordinates location;
    std::string currentRoute;
    void move(Coordinates newCoordinates);
    std::string generateRoute();
};

#endif //EAV_SYSTEM_CAR_H
