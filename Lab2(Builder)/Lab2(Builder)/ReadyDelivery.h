#pragma once
#include <vector>
#include "AbstractPassenger.h"
#include "DeliveryGuy.h"
#include "Board.h"

class ReadyDelivery : public Board
{
public:
	std::vector<std::unique_ptr<AbstactPassenger>> passengers;
	std::unique_ptr<Driver> driver;
	void run(std::vector<std::unique_ptr<AbstactPassenger>>& passengers);
};

