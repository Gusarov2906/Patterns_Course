#pragma once
#include <vector>
#include "AbstractPassenger.h"
#include "DeliveryGuy.h"

class ReadyDelivery
{
public:
	std::vector<AbstactPassenger> passengers;
	DeliveryGuy* driver;
	void run(std::vector<AbstactPassenger>& passengers);
	void setPtrToDriver(Driver* driver);
	Driver* getPtrToDriver();
private:
	Driver* ptrToDriver;
};

