//
// Created by Anastasia Reprintseva on 2019-03-26.
//

#include <random>
#include "ChargingPoint.h"

std::vector<ChargingStation> ChargingPoint::getStations() const {
    return stations;
}

void ChargingPoint::createStation(int id) {
    ChargingStation station(id);
    stations.emplace_back(station);
}

ChargingPoint::ChargingPoint(int id) {
    ChargingPoint::pointId = id;
    cout << "Creating a charging point with id " << pointId << endl;
    generateStations();
}

void ChargingPoint::generateStations() {
    // generates a random number of stations in the point
    cout << "Creating charging stations for a charging point with id " << pointId << endl;
    std::uniform_int_distribution<> dis(1, 5);
    std::random_device rd;
    std::default_random_engine re(rd());
    int numberOfStations = dis(re);
    for (int i = 0; i < numberOfStations; ++i) {
        createStation(i);
    }
}
