#pragma once
#include "BoatBoardBuilder.h"

void BoatBoardBuilder::sitDriver(std::unique_ptr<Driver> driver)
{
	boat.driver = nullptr;
	if (driver->onTrip == true)
		std::cout << "Driver is busy" << std::endl;
	else
	{
		boat.driver = std::unique_ptr<BusDriver>(static_cast<BusDriver*>(driver.release()));

		boat.driver->onTrip = true;
	}
}

void BoatBoardBuilder::sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
	boat.passengers.clear();
	int size = passengers.size();
	int num = 0;
	for (int i = 0; (i < size & num < 15); i++)
	{
		if (passengers[i])
		{
			//std::cout << typeid(*passengers.at(i).get()).name() << std::endl;
			if (typeid(*(passengers.at(i).get())).name() == typeid(Passenger).name())
			{
				boat.passengers.push_back(std::unique_ptr<Passenger>(static_cast<Passenger*>(passengers.at(i).release())));
				num++;
			}
		}
	}
}

void BoatBoardBuilder::sitSailor(std::unique_ptr<Sailor> sailor)
{
	boat.sailor = std::unique_ptr<Sailor>(static_cast<Sailor*>(sailor.release()));
}


BoatBoardBuilder::BoatBoardBuilder()
{
	boat = ReadyBoat();
}

ReadyBoat* BoatBoardBuilder::getReadyBoat(std::unique_ptr<Driver> driver, std::unique_ptr<Sailor> sailor, std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
	sitDriver(std::move(driver));
	sitSailor(std::move(sailor));
	sitPassengers(passengers);
	return &boat;
}

Board* BoatBoardBuilder::getBoard()
{
	return &boat;
}




