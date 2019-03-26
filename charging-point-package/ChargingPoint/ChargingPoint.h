//
// Created by Anastasia Reprintseva on 2019-03-26.
//

#ifndef EAV_SYSTEM_CHARGINGPOINT_H
#define EAV_SYSTEM_CHARGINGPOINT_H

#include <iostream>
#include <vector>
#include "../../charging-station-package/ChargingStation/ChargingStation.h"

class ChargingPoint {
private:
    std::vector<ChargingStation> stations;
public:
    explicit ChargingPoint(int id);
    int pointId;
    std::vector<ChargingStation> getStations();
    void createStation(int id);
};


#endif //EAV_SYSTEM_CHARGINGPOINT_H
