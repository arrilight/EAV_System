//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#ifndef EAV_SYSTEM_CHARGINGSTATION_H
#define EAV_SYSTEM_CHARGINGSTATION_H

#include <iostream>

using namespace std;

class ChargingStation {
private:
    double availableElecrticityLevel;
    double currentPrice;
public:
    explicit ChargingStation(int id);

    int stationId;

    double getAvailableEletcicity();

    double computeCost();
};


#endif //EAV_SYSTEM_CHARGINGSTATION_H
