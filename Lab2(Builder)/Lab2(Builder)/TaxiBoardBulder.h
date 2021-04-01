#pragma once
#include "BoardBuilder.h"
#include "ReadyTaxi.h"

class TaxiBoardBulder: public BoardBuilder
{
	ReadyTaxi taxi = ReadyTaxi();
	virtual void sitDriver(std::unique_ptr <Driver> driver) {};
	virtual void sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers) {};
	void addChildSeat(int number);
	ReadyTaxi getReadyTaxi(Driver* driver, std::vector<std::unique_ptr<AbstactPassenger>>& passengers);
	Board* getBoard();
};

