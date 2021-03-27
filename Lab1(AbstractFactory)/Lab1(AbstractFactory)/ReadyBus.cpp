#include "ReadyBus.h"

void ReadyBus::run(std::vector<Passenger>& passengers)
{
	if (this->passengers.empty())
	{
		std::cout << "Bus not run. No passengers!" << std::endl;
		getPtrToDriver()->onTrip = false;
	}
	else if (driver == nullptr)
	{
		std::cout << "Bus not run. No driver!" << std::endl;
		int size = this->passengers.size();
		for (int i = 0; i < size; i++)
		{
			passengers.push_back(this->passengers.back());
			this->passengers.pop_back();
		}
	}
	else if (driver->getDrivingLicence() != 'b')
	{
		std::cout << "Bus not run. Not valid licence of driver!" << std::endl;
		getPtrToDriver()->onTrip = false;
		int size = this->passengers.size();
		for (int i = 0; i < size; i++)
		{
			passengers.push_back(this->passengers.back());
			this->passengers.pop_back();
		}
	}
	else
	{
		std::cout << "Bus run)))" << std::endl;
	}
}

void ReadyBus::setPtrToDriver(Driver* driver)
{
	this->ptrToDriver = driver;
}

Driver* ReadyBus::getPtrToDriver()
{
	return this->ptrToDriver;
}
