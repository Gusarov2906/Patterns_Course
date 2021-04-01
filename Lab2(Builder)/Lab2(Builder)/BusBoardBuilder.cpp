#include "BusBoardBuilder.h"

void BusBoardBuilder::sitDriver(std::unique_ptr<Driver> driver)
{
	bus.driver = nullptr;
	if (driver->onTrip == true)
		std::cout << "Driver is busy" << std::endl;
	else
	{
		bus.driver = std::unique_ptr<BusDriver>(static_cast<BusDriver*>(driver.release()));

		bus.driver->onTrip = true;
	}
}

void BusBoardBuilder::sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
	bus.passengers.clear();
	int size = passengers.size();
	int num = 0;
	for (int i = 0; (i < size & num < 30);i++)
	{
		if (passengers[i])
		{
			//std::cout << typeid(*passengers.at(i).get()).name() << std::endl;
			if (typeid(*(passengers.at(i).get())).name() == typeid(BusPassenger).name())
			{
				bus.passengers.push_back(std::unique_ptr<BusPassenger>(static_cast<BusPassenger*>(passengers.at(i).release())));
				num++;
			}
		}
	}
}


BusBoardBuilder::BusBoardBuilder()
{
	bus = ReadyBus();
}

ReadyBus* BusBoardBuilder::getReadyBus(std::unique_ptr<Driver> driver, std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
	sitDriver(std::move(driver));
	sitPassengers(passengers);
	return &bus;
}

Board* BusBoardBuilder::getBoard()
{
	return &bus;
}
