//
// Created by Anastasia Reprintseva on 2019-03-13.
//
#include <iostream>

using namespace std;
#include "Car.h"

Car::Car(int id) {
    cout << "Car is being created" << endl;
    Car::id = id;
}

void Car::move(Coordinates newCoordinates) {
    cout << "Car is being moved" << endl;
}

void Car::generateRoute(Coordinates startCoordinates, Coordinates endCoordinates) {
    cout << "A root for a car is being created" << endl;
}
