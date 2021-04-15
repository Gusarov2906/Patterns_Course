#include "FlightAttendant.h"

FlightAttendant::FlightAttendant(FIO fio)
{
	this->fio = fio;
}

FlightAttendant::FlightAttendant(std::string nameAndSurname)
{
	this->fio = FIO(nameAndSurname);
}

int FlightAttendant::getBaggageWeight()
{
	return 0;
}

void FlightAttendant::output()
{
	std::cout << "Flight attendant: ";
	fio.output();
	std::cout << std::endl;
}
