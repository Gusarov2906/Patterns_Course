#pragma once
#include "Passenger.h"
class BusPassenger: public Passenger
{
public:
	BusPassenger(std::string surname, std::string name, std::string patronymic, bool isChild, bool benefit);
	BusPassenger(FIO fio, bool isChild, bool benefit);
	void output();
	void outputWithCost();
	void setLastTripCost(int cost);
	bool isChild;
	bool benefit;
	int lastTripCost;
};
