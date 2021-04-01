#pragma once
#include "BoardBuilder.h"
#include "BusDriver.h"
#include "ReadyBus.h"

class BusBoardBuilder: public BoardBuilder
{
	ReadyBus bus = ReadyBus();
	virtual void sitDriver(std::unique_ptr <Driver> driver) {};
	virtual void sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers) {};
	ReadyBus getReadyBus(Driver* driver, std::vector< std::unique_ptr<AbstactPassenger>>& passengers);
	Board* getBoard();
};

