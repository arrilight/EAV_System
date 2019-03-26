#include <iostream>
#include "world-package/World/World.h"

int main() {
    World world(2, 2);
    for (const Car &n : world.getCars() ) {
        std::cout << "Car "<< n.id << '\n';
        std::cout << "Latitude: " << n.location.latitude << '\n';
        std::cout << "Longitude: " << n.location.longitude << '\n';
        std::cout << "Route: " << n.currentRoute << '\n';
    }
    return 0;
}
