cmake_minimum_required(VERSION 3.13)
project(EAV_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(EAV_System main.cpp car-package/hardware-interfaces/GPS/GPS.cpp car-package/hardware-interfaces/GPS/GPS.h car-package/hardware-interfaces/WiFi/WiFi.cpp car-package/hardware-interfaces/WiFi/WiFi.h car-package/modules/Authentication/Authentication.cpp car-package/modules/Authentication/Authentication.h car-package/modules/Billing/Billing.cpp car-package/modules/Billing/Billing.h car-package/modules/Networking/Networking.cpp car-package/modules/Networking/Networking.h car-package/services/Aggregator/Aggregator.cpp car-package/services/Aggregator/Aggregator.h car-package/Car/Car.cpp car-package/Car/Car.h car-package/modules/V2CSCommunication/V2CSCommunication.cpp car-package/modules/V2CSCommunication/V2CSCommunication.h global-interfaces/Coordinates.cpp global-interfaces/Coordinates.h)