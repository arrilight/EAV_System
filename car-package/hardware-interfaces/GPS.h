//
// Created by Anastasia Reprintseva on 2019-03-13.
//

#ifndef EAV_SYSTEM_GPS_H
#define EAV_SYSTEM_GPS_H

class CoordinatesInterface {
public:
    double longitude;
    double latitude;
};

class GPS {
private:
    CoordinatesInterface coordinates;
public:
    CoordinatesInterface getCoordinates() {
        return coordinates;
    };
};


#endif //EAV_SYSTEM_GPS_H
