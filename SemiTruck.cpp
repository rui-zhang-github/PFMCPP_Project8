#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }

SemiTruck::SemiTruck(const SemiTruck&) = default;

SemiTruck::~SemiTruck() = default;

void SemiTruck::pullOver()
{
    Vehicle::setSpeed(0);
    std::cout << name << ": sorry officer. Please give me a second chance, and I will obey all the traffic rules and laws" << std::endl;
}

void SemiTruck::driveSlowlyAndCarefully()
{
    Vehicle::setSpeed(45);
    std::cout << name << ": Keeping speed at 45mph and always be at the slow-vehicle lane." << std::endl;
}
