#include "Passenger.h"

Passenger::Passenger(FIO fio)
{
	this->fio = fio;
}

Passenger::Passenger(std::string nameAndSurname)
{
	this->fio = FIO(nameAndSurname);
}

int Passenger::getBaggageWeight()
{
	return 0;
}

void Passenger::output()
{
	fio.output();
}
