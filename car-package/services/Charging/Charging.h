//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#ifndef EAV_SYSTEM_CHARGING_H
#define EAV_SYSTEM_CHARGING_H


class Charging {
private:
    int stationId;
public:
    void initCharging(int stationId);

    void closeCharging();
};


#endif //EAV_SYSTEM_CHARGING_H
