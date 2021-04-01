#pragma once
#include "Passenger.h"
#include "BusDriver.h"
#include "Board.h"
#include <vector>
#include "BusPassenger.h"

class ReadyBus : public Board
{
public:
	std::vector<std::unique_ptr<BusPassenger>> passengers;
	std::unique_ptr < std::unique_ptr<BusDriver>> driver;
	void run(std::vector<AbstactPassenger>& passengers);
}

