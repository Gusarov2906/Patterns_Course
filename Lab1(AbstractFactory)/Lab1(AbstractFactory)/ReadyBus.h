#pragma once
#include "Passenger.h"
#include "BusDriver.h"
#include <vector>
class ReadyBus
{
public:
	std::vector<Passenger> passengers;
	BusDriver* driver;
	void run(std::vector<Passenger> &passengers);
	void setPtrToDriver(Driver* driver);
	Driver* getPtrToDriver();
private:
	Driver* ptrToDriver;
};

