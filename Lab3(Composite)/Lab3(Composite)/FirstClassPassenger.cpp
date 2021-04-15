#include "FirstClassPassenger.h"

FirstClassPassenger::FirstClassPassenger(FIO fio, int baggageWeight)
{
	this->passenger = new Passenger(fio);
	this->baggageWeight = baggageWeight;
}

FirstClassPassenger::FirstClassPassenger(FIO fio)
{
	this->passenger = new Passenger(fio);
	this->baggageWeight = rand() % 55 + 6;
}

int FirstClassPassenger::getBaggageWeight()
{
	return this->baggageWeight;
}

void FirstClassPassenger::output()
{
	std::cout << "First class passenger: ";
	this->passenger->output();
	std::cout << " baggage: " << this->baggageWeight << std::endl;
}

void FirstClassPassenger::removeOverload(int* weightToRemove)
{
}

void FirstClassPassenger::addComponent(FlightComponent* component)
{
	this->passenger = static_cast<Passenger*>(component);
}

FirstClassPassenger::~FirstClassPassenger()
{
	delete passenger;
}
