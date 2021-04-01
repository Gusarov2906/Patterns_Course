#include "Passenger.h"

Passenger::Passenger(std::string surname, std::string name, std::string patronymic)
{
	this->fio.name = name;
	this->fio.surname = surname;
	this->fio.patronymic = patronymic;
}

Passenger::Passenger(FIO fio)
{
	this->fio.name= fio.name;
	this->fio.surname = fio.surname;
	this->fio.patronymic = fio.patronymic;
}

