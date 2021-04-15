#include "TaxiPassenger.h"

TaxiPassenger::TaxiPassenger(std::string surname, std::string name, std::string patronymic, bool isChild)
{
	this->fio.name = name;
	this->fio.surname = surname;
	this->fio.patronymic = patronymic;
	this->isChild = isChild;
	this->lastTripCost = 0;
}

TaxiPassenger::TaxiPassenger(FIO fio, bool isChild)
{
	this->fio.name = fio.name;
	this->fio.surname = fio.surname;
	this->fio.patronymic = fio.patronymic;
	this->isChild = isChild;
	this->lastTripCost = 0;
}

void TaxiPassenger::output()
{
	this->fio.output();
	std::cout << " isChild: " << this->isChild;
}

void TaxiPassenger::outputWithCost()
{
	this->fio.output();
	std::cout << " isChild: " << this->isChild << " last trip cost = " << this->lastTripCost;
}

void TaxiPassenger::setLastTripCost(int cost)
{
	this->lastTripCost = cost;
}
