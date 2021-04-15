#pragma once
#include "FlightComponent.h"
#include "Passenger.h"
#include <iostream>

class FirstClassPassenger: public FlightComponent
{
public:
	FirstClassPassenger(FIO fio, int baggageWeight);
	FirstClassPassenger(FIO fio);
	int getBaggageWeight();
	void output();
	void removeOverload(int* weightToRemove);
	void addComponent(FlightComponent* component);
	~FirstClassPassenger();
private:
	Passenger* passenger;
	int baggageWeight;
};

