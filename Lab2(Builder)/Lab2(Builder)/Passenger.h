#pragma once
#include <iostream>
#include "FIO.h"
#include "AbstractPassenger.h"

class Passenger : public AbstactPassenger
{
public:
	Passenger(std::string surname, std::string name, std::string patronymic);
	Passenger(FIO fio);
	Passenger(){};
	void output(){};
};

