//
// Created by Георгий Дзесов on 2019-03-14.
//

#ifndef EAV_SYSTEM_CHARGING_H
#define EAV_SYSTEM_CHARGING_H


class Charging {
public:
    void startCharging(int vehicleId);
    void terminateCharging(int vehicleId);
    double calculateTotalSum(int vehicleId);
};


#endif //EAV_SYSTEM_CHARGING_H
