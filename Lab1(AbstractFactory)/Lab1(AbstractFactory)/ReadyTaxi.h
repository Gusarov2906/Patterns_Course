#pragma once
#include <iostream>
#include <vector>
#include "Passenger.h"
#include "TaxiDriver.h"

class ReadyTaxi
{
public:
	std::vector<Passenger> passengers;
	TaxiDriver* driver;
	void run(std::vector<Passenger>& passengers);
	void setPtrToDriver(Driver* driver);
	Driver* getPtrToDriver();
private:
	Driver* ptrToDriver;
};

