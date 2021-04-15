#pragma once
#include "FlightComponent.h"
#include "FIO.h"
#include <iostream>

class Passenger: public FlightComponent
{
public:
	Passenger(FIO fio);
	Passenger(std::string nameAndSurname);
	Passenger() {};
	int getBaggageWeight();
	void output();
	void removeOverload(int* weightToRemove) {};
private:
	FIO fio;
};

