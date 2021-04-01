#include "BusPassenger.h"

BusPassenger::BusPassenger(std::string surname, std::string name, std::string patronymic, bool isChild, bool benefit)
{
	this->fio.name = name;
	this->fio.surname = surname;
	this->fio.patronymic = patronymic;
	this->isChild = isChild;
	this->benefit = benefit;
}

BusPassenger::BusPassenger(FIO fio, bool isChild, bool benefit)
{
	this->fio.name = fio.name;
	this->fio.surname = fio.surname;
	this->fio.patronymic = fio.patronymic;
	this->isChild = isChild;
	this->benefit = benefit;
}

void BusPassenger::output()
{
	this->fio.output();
	std::cout << " age: " << this->isChild << " benefit: " << this->benefit;
}

void BusPassenger::outputWithCost()
{
	this->fio.output();
	std::cout << " age: " << this->isChild << " benefit: " << this->benefit << " last trip cost = " << this->lastTripCost;
}

void BusPassenger::setLastTripCost(int cost)
{
	this->lastTripCost = cost;
}
