#include <iostream>
#include "world-package/World/World.h"
#include "common/modules/XMLParser.h"

int main() {
    World world(2, 2);
    for (const Car &n : world.getCars() ) {
        std::cout << "Car "<< n.id << '\n';
        std::cout << "Latitude: " << n.location.latitude << '\n';
        std::cout << "Longitude: " << n.location.longitude << '\n';
        std::cout << "Route: " << n.currentRoute << '\n';
    }
    XMLParser parser;
    parser.parseRoutes("test.rou.xml");
    return 0;
}
