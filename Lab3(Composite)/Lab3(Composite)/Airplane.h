#pragma once
#include "FlightComponent.h"
#include <iostream>
#include <vector>
#include <string>
#include "Pilot.h"
#include "FlightAttendant.h"
#include "BusinessClassPassenger.h"
#include "FirstClassPassenger.h"
#include "EconomClassPassenger.h"
#include "Crew.h"

class Airplane: public FlightComponent
{
public:
	Airplane(std::string name, int id);
	int getBaggageWeight();
	void output();
	void removeOverload(int* weightToRemove);
	void addComponent(FlightComponent* component);
private:
	std::string name;
	int id;
	std::vector <FlightComponent*> components;

};

