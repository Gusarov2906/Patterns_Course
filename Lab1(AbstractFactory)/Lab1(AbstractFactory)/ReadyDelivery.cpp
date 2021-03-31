#include "ReadyDelivery.h"

void ReadyDelivery::run(std::vector<AbstactPassenger>& passengers)
{
	if (this->passengers.empty())
	{
		std::cout << "Pizza delivery not run. No pizza!" << std::endl;
		getPtrToDriver()->onTrip = false;
	}
	else if (driver == nullptr)
	{
		std::cout << "Pizza delivery not run. No driver!" << std::endl;
		int size = this->passengers.size();
		for (int i = 0; i < size; i++)
		{
			passengers.push_back(this->passengers.back());
			this->passengers.pop_back();
		}
	}
	else
	{
		std::cout << "Pizza delivery run)))" << std::endl;
	}
}

void ReadyDelivery::setPtrToDriver(Driver* driver)
{
	this->ptrToDriver = driver;
}

Driver* ReadyDelivery::getPtrToDriver()
{
	return this->ptrToDriver;
}
