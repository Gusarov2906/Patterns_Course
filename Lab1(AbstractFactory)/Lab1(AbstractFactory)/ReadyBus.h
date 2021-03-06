#pragma once
#include "Passenger.h"
#include "BusDriver.h"
#include <vector>
class ReadyBus
{
public:
	std::vector<AbstactPassenger> passengers;
	BusDriver* driver;
	void run(std::vector<AbstactPassenger> &passengers);
	void setPtrToDriver(Driver* driver);
	Driver* getPtrToDriver();
private:
	Driver* ptrToDriver;
};

