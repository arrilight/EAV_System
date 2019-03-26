//
// Created by Anastasia Reprintseva on 2019-03-26.
//

#include "ChargingPoint.h"

std::vector<ChargingStation> ChargingPoint::getStations() {
    return stations;
}

void ChargingPoint::createStation(int id) {
    stations.emplace_back(id);;
}

ChargingPoint::ChargingPoint(int id) {
    ChargingPoint::pointId = id;
}
