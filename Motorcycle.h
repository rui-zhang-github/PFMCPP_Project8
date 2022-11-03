#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"

struct Motorcycle : Vehicle // removing "public" since it is unneccesary. The default type of the inheritance depends on the inheriting (derived) type , not on the one that is being inherited (base)
{
    Motorcycle(const std::string& n);
    Motorcycle(const Motorcycle&);
    ~Motorcycle() override; //there will be warnings if this line is written as virtual ~Motorcycle() = default;
    Motorcycle& operator=(const Motorcycle&) = default;
    
    void lanesplitAndRace( int topSpeed = std::numeric_limits<int>::max() );
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};
