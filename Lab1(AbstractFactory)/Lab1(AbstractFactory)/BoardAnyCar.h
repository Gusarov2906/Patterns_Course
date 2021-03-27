#pragma once
#include "Driver.h"
#include "Passenger.h"
#include <vector>

class BoardAnyCar
{
public:
	virtual void sitDriver(Driver* driver) = 0;
	virtual void sitPassengers(std::vector<Passenger> &passengers) = 0;
};

