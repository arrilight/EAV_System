//
// Created by Георгий Дзесов on 2019-03-14.
//

#ifndef EAV_SYSTEM_CS2VCOMMUNICATION_H
#define EAV_SYSTEM_CS2VCOMMUNICATION_H


class CS2VCommunication {
    void acceptConnection(int vehicleId);

    double transferChargingRate(int vehicleId);

    void closeConnection(int vehicleId);

    void earlyInterrupt(int vehicleId);
};


#endif //EAV_SYSTEM_CS2VCOMMUNICATION_H
