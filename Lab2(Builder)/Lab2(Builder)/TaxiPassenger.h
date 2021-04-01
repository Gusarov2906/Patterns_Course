#pragma once
#include "Passenger.h"
class TaxiPassenger : public Passenger
{
public:
	TaxiPassenger(std::string surname, std::string name, std::string patronymic, bool benefit);
	TaxiPassenger(FIO fio, bool isChild);
	void output();
	void outputWithCost();
	void setLastTripCost(int cost);
private:
	bool isChild;
	int lastTripCost;
};

