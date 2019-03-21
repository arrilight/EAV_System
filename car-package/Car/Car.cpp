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
    currentRoute = generateRoute(1);
}

void Car::move(Coordinates newCoordinates) {
    cout << "Car is being moved" << endl;
}

string Car::generateRoute(int index) {
    cout << "A root for a car is being created" << endl;
    std::string routes[4] = { "86218136#1 567541366 567541365 567541364 567541362 226277888#0 226277888#1 183484459 74711909 298981479 298981481 74711874#0 74711874#1 85135388 386347309 666022498 60863588#0 60863588#1",
                         "386031029#0 386031029#1 55222353#0 55222353#1 -55222353#1",
                         "183484513 183484512#0 183484512#1 183484512#2 183484512#3 183484463#0 183484463#1 183484463#2 -55222353#2 55222353#2 86217916 175850458 175850459 -169822739#3 -169822739#2 -60116792#2 -60116792#1 -60116792#0",
                         "-583354055 -365143917 365143917 583354055 583354054#0 583354054#1 86218133#0 86218133#1 581467980 581467979#0 581467979#1 -386031029#1 -386031029#0 -55222354#1 -55222354#0 -27084586#2 -27084586#1 -27084586#0 -550282879 550282879",
    };
    return routes[index];
}
