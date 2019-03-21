#include <iostream>
#include "world-package/World/World.h"

int main() {
    World world;
    world.createCar(1);
    world.createCar(2);
    for (const Car &n : world.getCars() ) {
        std::cout << "Car "<< n.id << '\n';
        std::cout << "Latitude: " << n.location.latitude << '\n';
        std::cout << "Longitude: " << n.location.longitude << '\n';
    }
    return 0;
}
