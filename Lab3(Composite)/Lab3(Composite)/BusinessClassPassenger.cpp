#include "BusinessClassPassenger.h"

BusinessClassPassenger::BusinessClassPassenger(FIO fio, int baggageWeight)
{
	this->passenger = new Passenger(fio);
	this->baggageWeight = baggageWeight;
}

BusinessClassPassenger::BusinessClassPassenger(FIO fio)
{
	this->passenger = new Passenger(fio);
	this->baggageWeight = rand()%30+6;
}

int BusinessClassPassenger::getBaggageWeight()
{
	return this->baggageWeight;
}

void BusinessClassPassenger::output()
{
	std::cout << "Business class passenger: ";
	this->passenger->output();
	std::cout << " baggage: " << this->baggageWeight << std::endl;
}

void BusinessClassPassenger::removeOverload(int* weightToRemove)
{
	
}

void BusinessClassPassenger::addComponent(FlightComponent* component)
{
	this->passenger = static_cast<Passenger*>(component);
}

BusinessClassPassenger::~BusinessClassPassenger()
{
	delete passenger;
}
