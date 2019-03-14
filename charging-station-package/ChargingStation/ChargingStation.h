//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#ifndef EAV_SYSTEM_CHARGINGSTATION_H
#define EAV_SYSTEM_CHARGINGSTATION_H


class ChargingStation {
private:
    double availableElecrticityLevel;
    double currentPrice;
public:
    double getAvailableEletcicity();
    double computeCost();
};


#endif //EAV_SYSTEM_CHARGINGSTATION_H
