//
// Created by Anastasia Reprintseva on 2019-03-14.
//

#ifndef EAV_SYSTEM_V2CSCOMMUNICATION_H
#define EAV_SYSTEM_V2CSCOMMUNICATION_H


class V2CSCommunication {
private:
    int stationId;
public:
    void initConnection(int stationId);

    void transferChargingData();

    void closeConnection();

    void earlyInterrupt();
};


#endif //EAV_SYSTEM_V2CSCOMMUNICATION_H
