#include "Crew.h"

Crew::Crew(std::string name)
{
	this->name = name;
}

int Crew::getBaggageWeight()
{
	return 0;
}

void Crew::output()
{
	std::cout << "Crew: " << this->name << std::endl ;
	for (int i = 0; i < persons.size(); i++)
	{
		persons[i]->output();
	}
}

void Crew::removeOverload(int * weightToRemove)
{
}

void Crew::addComponent(FlightComponent * component)
{
	persons.push_back(component);
}
