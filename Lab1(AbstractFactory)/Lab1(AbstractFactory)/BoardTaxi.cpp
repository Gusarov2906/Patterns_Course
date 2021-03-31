#include "BoardTaxi.h"
#include <algorithm>
void BoardTaxi::sitDriver(Driver* driverPtr)
{
		taxi.driver = nullptr;
		if (driverPtr->onTrip == true)
			std::cout << "Driver is busy" << std::endl;
		else
		{
			taxi.setPtrToDriver(driverPtr);
			taxi.driver = new TaxiDriver();
			taxi.driver->fio = driverPtr->fio;
			taxi.driver->setDrivingLicence(driverPtr->drivingLicence);
			driverPtr->onTrip = true;
		}
}

void BoardTaxi::sitPassengers(std::vector<AbstactPassenger>& passengers)
{
	taxi.passengers.clear();
	int size = passengers.size();
	for (int i = 0; i < std::min(size, 4); i++)
	{
		taxi.passengers.push_back(passengers.back());
		passengers.pop_back();
	}
}

ReadyTaxi BoardTaxi::getReadyTaxi(Driver* driver, std::vector<AbstactPassenger>& passengers)
{
	sitDriver(driver);
	sitPassengers(passengers);
	return taxi;
}
