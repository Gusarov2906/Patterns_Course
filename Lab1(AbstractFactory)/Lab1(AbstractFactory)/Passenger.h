#pragma once
#include "FIO.h"

class Passenger
{
public:
	FIO fio = FIO();

	Passenger(std::string surname, std::string name, std::string patronymic)
	{
		fio.name = name;
		fio.surname = surname;
		fio.patronymic = patronymic;
	}

	Passenger(FIO fio)
	{
		this->fio = fio;
	}
};

