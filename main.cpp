#include <iostream>
#include "world-package/World/World.h"
#include "common/modules/XMLParser.h"

int main() {
//    World world(2, 2);
//    std::cout << "World has cars: " << '\n';
//    for (const Car &n : world.getCars() ) {
//        std::cout << "Car "<< n.id << '\n';
//        std::cout << "Latitude: " << n.location.latitude << '\n';
//        std::cout << "Longitude: " << n.location.longitude << '\n';
//        std::cout << "Route: " << n.currentRoute << '\n';
//    }
//    std::cout << "World has points: " << '\n';
//    for (const ChargingPoint &k : world.getPoints() ) {
//        std::cout << "Point "<< k.pointId << '\n';
//        std::cout << "Has stations" << '\n';
//        for (const ChargingStation &j : k.getStations()) {
//            std::cout << "Station "<< j.stationId << '\n';
//        }
//    }
    XMLParser parser;
//    parser.parseRoutes("test.rou.xml");
    parser.createFile();
    return 0;
}
