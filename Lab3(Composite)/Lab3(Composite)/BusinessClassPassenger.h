#pragma once
#include "FlightComponent.h"
#include "Passenger.h"
#include <iostream>

class BusinessClassPassenger: public FlightComponent
{
public:
	BusinessClassPassenger(FIO fio, int baggageWeight);
	BusinessClassPassenger(FIO fio);
	int getBaggageWeight();
	void output();
	void removeOverload(int* weightToRemove);
	void addComponent(FlightComponent* component);
	~BusinessClassPassenger();
private:
	Passenger* passenger;
	int baggageWeight;
};

