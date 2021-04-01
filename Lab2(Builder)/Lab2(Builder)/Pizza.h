#pragma once
#include "AbstractPassenger.h"
class Pizza: public AbstactPassenger
{
public:
	FIO fio = FIO();

	Pizza(std::string nameOfPizza, std::string typeOfPizzs, std::string ingradients);
};

