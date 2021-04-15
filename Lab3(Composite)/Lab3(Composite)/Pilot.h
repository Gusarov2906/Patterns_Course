#pragma once
#include "FIO.h"
#include "FlightComponent.h"
#include <iostream>

class Pilot : public FlightComponent
{
public:
	Pilot(FIO fio);
	Pilot(std::string nameAndSurname);
	Pilot() {};
	int getBaggageWeight();
	void output();
	void removeOverload(int* weightToRemove) {};
private:
	FIO fio;
};