#include "BusStop.h"

void BusStop::output()
{
	std::cout << std::endl;
	std::cout << "Bus Stop" << std::endl;
	std::cout << std::endl;
	std::cout << "Drivers:" << std::endl;
	for (int i = 0; i < drivers.size(); i++)
	{
		drivers[i]->fio.output();
		std::cout << " " << drivers[i]->drivingLicence <<" " << drivers[i]->onTrip <<std::endl;
	}
	std::cout << std::endl;
	std::cout << "Passengers:" << std::endl;
	for (int i = 0; i < passengers.size(); i++)
	{
		passengers[i]->fio.output();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
