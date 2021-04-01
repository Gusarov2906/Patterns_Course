#pragma once
#include <iostream>
#include <vector>
#include "Passenger.h"
#include "TaxiDriver.h"
#include "Board.h"
#include "TaxiPassenger.h"

class ReadyTaxi: public Board
{
public:
	std::vector<std::unique_ptr<AbstactPassenger>> passengers;
	std::unique_ptr <Driver> driver;
	void run(std::vector< std::unique_ptr<AbstactPassenger>>& passengers);
};

