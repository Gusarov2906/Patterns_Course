#pragma once
#include <iostream>
#include <vector>
#include "Passenger.h"
#include "TaxiDriver.h"

class ReadyTaxi
{
public:
	std::vector<AbstactPassenger> passengers;
	TaxiDriver* driver;
	void run(std::vector<AbstactPassenger>& passengers);
	void setPtrToDriver(Driver* driver);
	Driver* getPtrToDriver();
private:
	Driver* ptrToDriver;
};

