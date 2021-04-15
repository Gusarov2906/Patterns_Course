#include "ReadyTaxi.h"

void ReadyTaxi::run()
{
	std::cout << std::endl;
	if (this->passengers.empty())
	{
		std::cout << "Taxi not run. No passengers!" << std::endl;
	}
	else if (driver == nullptr)
	{
		std::cout << "Taxi not run. No driver!" << std::endl;
		int size = this->passengers.size();
		for (int i = 0; i < size; i++)
		{
			this->passengers.pop_back();
		}
	}
	else if (driver->getDrivingLicence() != 'b' && driver->getDrivingLicence() != 'a')
	{

		std::cout << "Taxi not run. Not valid licence of driver!" << std::endl;
		int size = this->passengers.size();
		for (int i = 0; i < size; i++)
		{
			this->passengers.pop_back();
		}
	}
	else
	{
		std::cout << "Taxi run)))" << std::endl;
		for (int i = 0; i < this->passengers.size(); i++)
		{
			this->passengers[i].get()->output();
			std::cout << std::endl;
		}
	}
}
