#include "TaxiBoardBulder.h"

void TaxiBoardBulder::sitDriver(std::unique_ptr<Driver> driver)
{
	taxi.driver = nullptr;
	if (driver->onTrip == true)
		std::cout << "Driver is busy" << std::endl;
	else
	{
		taxi.driver = std::unique_ptr<TaxiDriver>(static_cast<TaxiDriver*>(driver.release()));
		taxi.driver->onTrip = true;
	}
}

void TaxiBoardBulder::sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
	taxi.passengers.clear();
	int size = passengers.size();
	int num = 0;
	for (int i = 0; (i < size & num < 4); i++)
	{
		if (passengers[i])
		{
			if (typeid(*(passengers.at(i).get())).name() == typeid(TaxiPassenger).name())
			{
				taxi.passengers.push_back(std::unique_ptr<TaxiPassenger>(static_cast<TaxiPassenger*>(passengers[i].release())));
				if (taxi.passengers.back()->isChild == 1)
				{
					taxi.numOfChildSeats--;
					if (taxi.numOfChildSeats < 0)
					{
						passengers[i] = std::unique_ptr<AbstactPassenger>(static_cast<AbstactPassenger*>(taxi.passengers.back().release()));
							taxi.passengers.pop_back();
							num--;
					}
				}
				num++;
			}
		}
	}
}

TaxiBoardBulder::TaxiBoardBulder()
{
	taxi = ReadyTaxi();
}

void TaxiBoardBulder::addChildSeat(int number)
{
	this->taxi.numOfChildSeats = number;
}

ReadyTaxi* TaxiBoardBulder::getReadyTaxi(std::unique_ptr<Driver> driver, std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
	sitDriver(std::move(driver));
	addChildSeat(1);
	sitPassengers(passengers);
	return &taxi;
}

Board * TaxiBoardBulder::getBoard()
{
	return &taxi;
}

