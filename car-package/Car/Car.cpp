//
// Created by Anastasia Reprintseva on 2019-03-13.
//
#include <iostream>
#include <random>
using namespace std;
#include "Car.h"


Car::Car(int id) {
    Car::id = id;
    cout << "Car with id " << id << " is being created" << endl;
    Coordinates initial_coordinates;
    location = initial_coordinates;
    currentRoute = generateRoute();
}

void Car::move(Coordinates newCoordinates) {
    cout << "Car " << id << " is being moved" << endl;
}


void Car::getNextEdge(int currentEdge) {
    std::vector<Edge> possibleEdges = nullptr;
}

string Car::generateRoute() {
    cout << "A root for a car " << id << " is being created" << endl;
    std::string routes[10] = { "86218136#1 567541366 567541365 567541364 567541362 226277888#0 226277888#1 183484459 74711909 298981479 298981481 74711874#0 74711874#1 85135388 386347309 666022498 60863588#0 60863588#1",
                         "386031029#0 386031029#1 55222353#0 55222353#1 -55222353#1",
                         "183484513 183484512#0 183484512#1 183484512#2 183484512#3 183484463#0 183484463#1 183484463#2 -55222353#2 55222353#2 86217916 175850458 175850459 -169822739#3 -169822739#2 -60116792#2 -60116792#1 -60116792#0",
                         "-583354055 -365143917 365143917 583354055 583354054#0 583354054#1 86218133#0 86218133#1 581467980 581467979#0 581467979#1 -386031029#1 -386031029#0 -55222354#1 -55222354#0 -27084586#2 -27084586#1 -27084586#0 -550282879 550282879",
                         "86218140#1 -86218140#1 -86218140#0 86218133#0 86218133#1 581467980 581467979#0 581467979#1 86218134#0 86218134#1 581467978#0 581467978#1 183484508 85135387#0 85135387#1 85135387#2 26925642 183484513",
                         "226277888#0 226277888#1 183484459 74711909 298981479 298981481 26772852 183484463#0 183484463#1 183484463#2 -55222353#2 55222353#2 86217916 175850458 175850459 -169822739#3 -169822739#2 -60116792#2 -60116792#1 60116792#1",
                         "-60116792#1 60116792#1 60116792#2 169822739#2 169822739#3 -175850459 -175850458 -86217916 -55222353#2 55222353#2 86217915#0 86217915#1 547507580 547507579#0 547507579#1 -86218140#2 -86218140#1 -86218140#0 -386031034#1 -386031034#0 -26925644#2 -26925644#1 183484464#0 183484464#1",
                         "27084586#0 27084586#1 27084586#2 545553571#0 545553571#1 545553571#2 545553571#3",
                         "-27084586#1 27084586#1 27084586#2 55222354#0 55222354#1 386031029#0 386031029#1 86218134#0 86218134#1 581467978#0 581467978#1 183484512#0",
                         "-60863588#1 -60863588#0 386347308 -386347308"
    };
    std::uniform_int_distribution<> dis(0, 9);
    std::random_device rd;
    std::default_random_engine re(rd());
    int index = dis(re);
    return routes[index];
}

