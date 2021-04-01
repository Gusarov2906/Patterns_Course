#include "BusBoardBuilder.h"
#include <typeinfo>

void BusBoardBuilder::sitDriver(std::unique_ptr<Driver> driver)
{
	bus.driver = nullptr;
	if (driver->onTrip == true)
		std::cout << "Driver is busy" << std::endl;
	else
	{
		bus.driver = std::move(driver);
		bus.driver->fio = driver->fio;
		bus.driver->setDrivingLicence(driver->drivingLicence);
		driver->onTrip = true;
	}
}

void BusBoardBuilder::sitPassengers(std::vector<AbstactPassenger>& passengers)
{
	bus.passengers.clear();
	int size = passengers.size();
	for (int i = 0; i < std::min(size, 30);)
	{
		std::cout << typeid(passengers.at(i)).name() << std::endl;
		if (typeid(passengers[i]).name() == typeid(BusPassenger).name())
		{
			bus.passengers.push_back(reinterpret_cast<BusPassenger&>(passengers.back()));
			passengers.pop_back();
		}
	}
}

ReadyBus BusBoardBuilder::getReadyBus(Driver* driver, std::vector<AbstactPassenger>& passengers)
{
	sitDriver(driver);
	sitPassengers(passengers);
	return bus;
}

Board* BusBoardBuilder::getBoard()
{
	return &bus;
}
