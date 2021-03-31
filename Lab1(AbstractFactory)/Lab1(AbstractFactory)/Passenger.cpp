#include "Passenger.h"

Passenger::Passenger(std::string surname, std::string name, std::string patronymic)
{
	fio.name = name;
	fio.surname = surname;
	fio.patronymic = patronymic;
}

Passenger::Passenger(FIO fio)
{
	this->fio.name= fio.name;
	this->fio.surname = fio.surname;
	this->fio.patronymic = fio.patronymic;
}
