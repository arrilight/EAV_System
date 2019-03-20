//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#include <iostream>
#include "World.h"

using namespace std;

void World::createStation() {

}

void World::createCar(int id) {
    cars.emplace_back(id);
}

World::World() {
    cout << "World is being created" << endl;
}

std::vector<Car> World::getCars() {
    return cars;
}

int main() {
    World world;
    world.createCar(1);
    for (const Car &n : world.getCars() ) {
        std::cout << n.id << '\n';
    }
    return 0;
}