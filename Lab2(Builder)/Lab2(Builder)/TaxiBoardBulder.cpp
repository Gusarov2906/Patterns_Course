#include "TaxiBoardBulder.h"

void TaxiBoardBulder::sitDriver(Driver* driver)
{
	taxi.driver = nullptr;
	if (driver->onTrip == true)
		std::cout << "Driver is busy" << std::endl;
	else
	{
		taxi.setPtrToDriver(driver);
		taxi.driver = new TaxiDriver();
		taxi.driver->fio = driver->fio;
		taxi.driver->setDrivingLicence(driver->drivingLicence);
		driver->onTrip = true;
	}
}

void TaxiBoardBulder::sitPassengers(std::vector<AbstactPassenger>& passengers)
{
	taxi.passengers.clear();
	int size = passengers.size();
	for (int i = 0; i < std::min(size, 4); i++)
	{
		if (typeid(passengers[i]).name() == typeid(TaxiPassenger).name())
		{
			taxi.passengers.push_back(reinterpret_cast<TaxiPassenger&>(passengers.back()));
			passengers.pop_back();
		}
	}
}

void TaxiBoardBulder::addChildSeat(int number)
{
}


ReadyTaxi TaxiBoardBulder::getReadyTaxi(Driver* driver, std::vector<AbstactPassenger>& passengers)
{
	sitDriver(driver);
	sitPassengers(passengers);
	return taxi;
}

Board* TaxiBoardBulder::getBoard()
{
	return &taxi;
}
