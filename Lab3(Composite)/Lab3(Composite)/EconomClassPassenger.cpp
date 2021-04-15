#include "EconomClassPassenger.h"

EconomClassPassenger::EconomClassPassenger(FIO fio, int baggageWeight)
{
	this->passenger = new Passenger(fio);
	this->baggageWeight = baggageWeight;
}

EconomClassPassenger::EconomClassPassenger(FIO fio)
{
	this->passenger = new Passenger(fio);
	this->baggageWeight = rand() % 15 + 6;;
}

int EconomClassPassenger::getBaggageWeight()
{
	return this->baggageWeight;
}

void EconomClassPassenger::output()
{
	std::cout << "Econom class passenger: ";
	this->passenger->output();
	std::cout << " baggage: " << this->baggageWeight << std::endl;
}

void EconomClassPassenger::removeOverload(int* weightToRemove)
{
	int oldBaggageWeight = this->baggageWeight;
	*weightToRemove -= oldBaggageWeight;
	this->baggageWeight = 0;
	std::cout << "Baggage removed: ";
	this->passenger->output();
	std::cout <<" baggege: "<< oldBaggageWeight <<std::endl;
}

void EconomClassPassenger::addComponent(FlightComponent* component)
{
	this->passenger = static_cast<Passenger*>(component);
}

EconomClassPassenger::~EconomClassPassenger()
{
	delete passenger;
}
