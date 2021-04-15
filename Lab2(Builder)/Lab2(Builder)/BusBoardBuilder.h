#pragma once
#include "BoardBuilder.h"
#include "BusDriver.h"
#include "ReadyBus.h"
#include <algorithm>
#include <cctype>

class BusBoardBuilder: public BoardBuilder
{
public:
	ReadyBus bus;

	BusBoardBuilder();
	void sitDriver(std::unique_ptr<Driver> driver);
	void sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers);
	ReadyBus* getReadyBus(std::unique_ptr<Driver> driver, std::vector< std::unique_ptr<AbstactPassenger>>& passengers);
	Board* getBoard();
};

