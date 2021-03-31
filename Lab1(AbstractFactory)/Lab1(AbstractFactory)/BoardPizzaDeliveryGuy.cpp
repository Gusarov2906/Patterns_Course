#include "BoardPizzaDeliveryGuy.h"
#include <algorithm>
void BoardPizzaDeliveryGuy::sitDriver(Driver* driverPtr)
{
	delivery.driver = nullptr;
	if (driverPtr->onTrip == true)
		std::cout << "Driver is busy" << std::endl;
	else
	{
		delivery.setPtrToDriver(driverPtr);
		delivery.driver = new DeliveryGuy();
		delivery.driver->fio = driverPtr->fio;
		driverPtr->onTrip = true;
	}
}

void BoardPizzaDeliveryGuy::sitPassengers(std::vector<AbstactPassenger> &passengers)
{
	delivery.passengers.clear();
	int size = passengers.size();
	for (int i = 0; i < std::min(size, 10); i++)
	{
		delivery.passengers.push_back(passengers.back());
		passengers.pop_back();
	}
}

ReadyDelivery BoardPizzaDeliveryGuy::getReadyDelivery(Driver* driver, std::vector<AbstactPassenger>& passengers)
{
	sitDriver(driver);
	sitPassengers(passengers);
	return delivery;
}

