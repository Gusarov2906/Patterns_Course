#pragma once
#include "FlightComponent.h"
#include "Passenger.h"
#include <iostream>

class EconomClassPassenger: public FlightComponent
{
public:
	EconomClassPassenger(FIO fio, int baggageWeight);
	EconomClassPassenger(FIO fio);
	int getBaggageWeight();
	void output();
	void removeOverload(int* weightToRemove);
	void addComponent(FlightComponent* component);
	~EconomClassPassenger();
private:
	Passenger* passenger;
	int baggageWeight;
};

