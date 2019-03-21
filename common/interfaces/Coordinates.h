//
// Created by Георгий Дзесов on 2019-03-14.
//

#ifndef EAV_SYSTEM_COORDINATES_H
#define EAV_SYSTEM_COORDINATES_H
double static MAX_LONGITUDE = 55.7908;
double static MIN_LONGITUDE = 55.7841;
double static MAX_LATITUDE = 49.1237;
double static MIN_LATITUDE = 49.1136;


class Coordinates {
public:
    Coordinates();
    double longitude;
    double latitude;
    void generateLongitude();
    void generateLatitude();

};



#endif //EAV_SYSTEM_COORDINATES_H
