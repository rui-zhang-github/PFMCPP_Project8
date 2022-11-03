#pragma once
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);
    SemiTruck(const SemiTruck&);
    ~SemiTruck() override; //there will be warnings if this line is written as virtual ~SemiTruck() = default;
    SemiTruck& operator=(const SemiTruck&) = default;

    void pullOver();
    void driveSlowlyAndCarefully();
};
