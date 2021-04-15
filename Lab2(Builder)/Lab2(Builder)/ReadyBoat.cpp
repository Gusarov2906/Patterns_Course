#include "ReadyBoat.h"

void ReadyBoat::run()
{
	std::cout << std::endl;
	if (this->passengers.empty())
	{
		std::cout << "Boat not run. No passengers!" << std::endl;
	}
	else if (driver == nullptr)
	{
		std::cout << "Boat not run. No driver!" << std::endl;
		int size = this->passengers.size();
		for (int i = 0; i < size; i++)
		{
			this->passengers.pop_back();
		}
	}
	else
	{
		std::cout << "Boat run)))" << std::endl;
		for (int i = 0; i < this->passengers.size(); i++)
		{
			this->passengers[i].get()->output();
			std::cout << std::endl;
		}
	}
}
