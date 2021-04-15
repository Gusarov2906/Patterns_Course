#pragma once
#include "BoardBuilder.h"
#include "ReadyTaxi.h"
#include <algorithm>
#include <cctype>

class TaxiBoardBulder: public BoardBuilder
{
public:
	ReadyTaxi taxi;

	TaxiBoardBulder();
	void sitDriver(std::unique_ptr<Driver> driver);
	void sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers);
	void addChildSeat(int number);
	ReadyTaxi* getReadyTaxi(std::unique_ptr<Driver> driver, std::vector<std::unique_ptr<AbstactPassenger>>& passengers);
	Board* getBoard();
};

