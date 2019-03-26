//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#include <iostream>
#include "World.h"

using namespace std;

void World::createCar(int id) {
    cars.emplace_back(id);
}

World::World(int numOfCars, int numOfPoints) {
    cout << "World is being created" << endl;
    for (int i = 0; i < numOfCars; ++i) {
        createCar(i);
    }
    for (int j = 0; j < numOfPoints; ++j) {
        createPoint(j);
    }
}

std::vector<Car> World::getCars() {
    return cars;
}

void World::createPoint(int id) {
    points.emplace_back(id);
}

