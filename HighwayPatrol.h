#pragma once 
#include "Vehicle.h"
#include "Highway.h"

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    HighwayPatrol(const HighwayPatrol&);
    ~HighwayPatrol(); //there will be warnings if this line is written as virtual ~HighwayPatrol() = default;
    HighwayPatrol& operator=(const HighwayPatrol&) = default;

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
