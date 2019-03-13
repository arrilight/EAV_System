cmake_minimum_required(VERSION 3.13)
project(EAV_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(EAV_System main.cpp car-package/hardware-interfaces/GPS.cpp car-package/hardware-interfaces/GPS.h car-package/hardware-interfaces/WiFi.cpp car-package/hardware-interfaces/WiFi.h car-package/modules/Authentication.cpp car-package/modules/Authentication.h car-package/modules/Billing.cpp car-package/modules/Billing.h car-package/modules/Networking.cpp car-package/modules/Networking.h car-package/services/Aggregator.cpp car-package/services/Aggregator.h car-package/Car.cpp car-package/Car.h)