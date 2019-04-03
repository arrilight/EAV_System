//
// Created by Anastasia Reprintseva on 2019-03-26.
//

#ifndef EAV_SYSTEM_CHARGINGPOINT_H
#define EAV_SYSTEM_CHARGINGPOINT_H

#include <iostream>
#include <vector>
#include "../../charging-station-package/ChargingStation/ChargingStation.h"

using namespace std;

class ChargingPoint {
private:
    std::vector<ChargingStation> stations;
    void createStation(int id);
    void generateStations();
public:
    explicit ChargingPoint(int id);
    int pointId;
    std::vector<ChargingStation> getStations() const;
};


#endif //EAV_SYSTEM_CHARGINGPOINT_H
