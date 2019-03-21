//
// Created by Anastasia Reprintseva on 2019-03-13.
//
#include <iostream>

using namespace std;
#include "Car.h"


Car::Car(int id) {
    cout << "Car is being created" << endl;
    Car::id = id;
    Coordinates initial_coordinates;
    location = initial_coordinates;
}

void Car::move(Coordinates newCoordinates) {
    cout << "Car is being moved" << endl;
}

Coordinates* Car::generateRoute() {
    cout << "A root for a car is being created" << endl;
    auto * result = (Coordinates*) malloc(sizeof(Coordinates) * 2);
    return result;
}
