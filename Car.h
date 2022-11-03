#pragma once
#include "Vehicle.h"

struct Car : Vehicle // removing "public" since it is unneccesary. The default type of the inheritance depends on the inheriting (derived) type , not on the one that is being inherited (base)
{
    Car(const std::string& n);
    Car(const Car&);
    ~Car() override; //there will be warnings if this line is written as virtual ~Car() = default;
    Car& operator=(const Car&) = default;

    void closeWindows();

    void tryToEvade() override;
};
