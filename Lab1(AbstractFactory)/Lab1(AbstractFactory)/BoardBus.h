#pragma once
#include "BoardAnyCar.h"
#include "ReadyBus.h"
class BoardBus : public BoardAnyCar
{
public:
	ReadyBus bus = ReadyBus();
	void sitDriver(Driver* driver);
	void sitPassengers(std::vector<AbstactPassenger> &passengers);
	ReadyBus getReadyBus(Driver* driver, std::vector<AbstactPassenger>& passengers);
};

