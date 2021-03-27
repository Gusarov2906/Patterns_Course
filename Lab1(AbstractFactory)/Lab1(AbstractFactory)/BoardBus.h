#pragma once
#include "BoardAnyCar.h"
#include "ReadyBus.h"
class BoardBus : public BoardAnyCar
{
public:
	ReadyBus bus = ReadyBus();
	void sitDriver(Driver* driver);
	void sitPassengers(std::vector<Passenger> &passengers);
	ReadyBus getReadyBus(Driver* driver, std::vector<Passenger>& passengers);
};

