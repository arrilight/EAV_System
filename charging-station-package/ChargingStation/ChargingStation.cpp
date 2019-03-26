//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#include "ChargingStation.h"

double ChargingStation::getAvailableEletcicity() {
    return 0;
}

double ChargingStation::computeCost() {
    return 0;
}

ChargingStation::ChargingStation(int id) {
    ChargingStation::stationId = id;
}
