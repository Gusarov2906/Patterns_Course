#include "BoardBus.h"
#include <algorithm>

void BoardBus::sitDriver(Driver* driverPtr)
{
	bus.driver = nullptr;
	if (driverPtr->onTrip == true)
		std::cout << "Driver is busy" << std::endl;
	else
	{
		bus.setPtrToDriver(driverPtr);
		bus.driver = new BusDriver();
		bus.driver->fio = driverPtr->fio;
		bus.driver->setDrivingLicence(driverPtr->drivingLicence);
		driverPtr->onTrip = true;
	}
}

void BoardBus::sitPassengers(std::vector<AbstactPassenger> &passengers)
{
	bus.passengers.clear();
	int size = passengers.size();
	for (int i = 0; i < std::min(size,30); i++)
	{
		bus.passengers.push_back(passengers.back());
		passengers.pop_back();
	}
}

ReadyBus BoardBus::getReadyBus(Driver* driver, std::vector<AbstactPassenger>& passengers)
{
	sitDriver(driver);
	sitPassengers(passengers);
	return bus;
}
