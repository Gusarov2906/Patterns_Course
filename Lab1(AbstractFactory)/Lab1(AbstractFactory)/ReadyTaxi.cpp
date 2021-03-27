#include "ReadyTaxi.h"

void ReadyTaxi::run(std::vector<Passenger>& passengers)
{
	if (this->passengers.empty())
	{
		std::cout << "Taxi not run. No passengers!" << std::endl;
		getPtrToDriver()->onTrip = false;
	}
	else if (driver == nullptr)
	{
		std::cout << "Taxi not run. No driver!" << std::endl;
		int size = this->passengers.size();
		for (int i = 0; i < size; i++)
		{
			passengers.push_back(this->passengers.back());
			this->passengers.pop_back();
		}
	}
	else if (driver->getDrivingLicence() != 'b' && driver->getDrivingLicence() != 'a')
	{

		std::cout << "Taxi not run. Not valid licence of driver!" << std::endl;
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
		std::cout << "Taxi run)))" << std::endl;
	}
}

void ReadyTaxi::setPtrToDriver(Driver* driver)
{
	this->ptrToDriver = driver;
}

Driver* ReadyTaxi::getPtrToDriver()
{
	return this->ptrToDriver;
}
