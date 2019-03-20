//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#ifndef EAV_SYSTEM_WORLD_H
#define EAV_SYSTEM_WORLD_H

#include "../../car-package/Car/Car.h"
#include <vector>

class World {
private:
    std::vector<Car> cars;
public:
    World();
    void createStation();
    void createCar(int id);
    std::vector<Car> getCars();
};

#endif //EAV_SYSTEM_WORLD_H
