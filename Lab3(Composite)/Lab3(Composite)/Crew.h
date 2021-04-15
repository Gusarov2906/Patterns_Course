#pragma once
#include "FlightComponent.h"
#include <iostream>
#include <string>
#include <vector>

class Crew: public FlightComponent
{
public:
	Crew(std::string name);
	int getBaggageWeight();
	void output();
	void removeOverload(int* weightToRemove);
	void addComponent(FlightComponent* component);
private:
	std::string name;
	std::vector<FlightComponent*> persons;
};

