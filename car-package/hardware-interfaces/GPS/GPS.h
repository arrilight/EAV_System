//
// Created by Anastasia Reprintseva on 2019-03-13.
//

#ifndef EAV_SYSTEM_GPS_H
#define EAV_SYSTEM_GPS_H


#include "../../../global-interfaces/Coordinates.h"

class GPS {
private:
    Coordinates coordinates;
public:
    Coordinates getCoordinates() {
        return coordinates;
    };
};


#endif //EAV_SYSTEM_GPS_H
