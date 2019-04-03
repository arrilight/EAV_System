//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#ifndef EAV_SYSTEM_WORLD_H
#define EAV_SYSTEM_WORLD_H

#include "../../car-package/Car/Car.h"
#include "../../charging-point-package/ChargingPoint/ChargingPoint.h"
#include <vector>

class World {
private:
    std::vector<Car> cars;
    std::vector<ChargingPoint> points;
    void createPoint(int id);
    void createCar(int id);
public:
    World(int numOfCars, int numOfStations);
    std::vector<Car> getCars();
    std::vector<ChargingPoint> getPoints();
};

#endif //EAV_SYSTEM_WORLD_H
