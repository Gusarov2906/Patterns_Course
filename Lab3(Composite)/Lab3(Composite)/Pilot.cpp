#include "Pilot.h"

Pilot::Pilot(FIO fio)
{
	this->fio = fio;
}

Pilot::Pilot(std::string nameAndSurname)
{
	this->fio = FIO(nameAndSurname);
}

int Pilot::getBaggageWeight()
{
	return 0;
}

void Pilot::output()
{
	std::cout << "Pilot: ";
	fio.output();
	std::cout << std::endl;
}
