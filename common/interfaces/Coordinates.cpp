//
// Created by Георгий Дзесов on 2019-03-14.
//

#include <random>
#include "Coordinates.h"

Coordinates::Coordinates() {
    generateLatitude();
    generateLongitude();
}

void Coordinates::generateLongitude() {
    std::uniform_real_distribution<double> unif(MIN_LONGITUDE, MAX_LONGITUDE);
    std::random_device rd;
    std::default_random_engine re(rd());
    double a_random_longitude = unif(re);
    longitude = a_random_longitude;
}

void Coordinates::generateLatitude() {
    std::uniform_real_distribution<double> unif(MIN_LATITUDE, MAX_LATITUDE);
    std::random_device rd;
    std::default_random_engine re(rd());
    double a_random_latitude = unif(re);
    latitude = a_random_latitude;
}
