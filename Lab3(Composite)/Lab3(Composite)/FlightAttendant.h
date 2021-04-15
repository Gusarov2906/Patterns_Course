#pragma once
#include "FIO.h"
#include "FlightComponent.h"
#include <iostream>

class FlightAttendant: public FlightComponent
{
public:
	FlightAttendant(FIO fio);
	FlightAttendant(std::string nameAndSurname);
	FlightAttendant() {};
	int getBaggageWeight();
	void output();
	void removeOverload(int* weightToRemove) {};
private:
	FIO fio;
};

