#pragma once
#include "Board.h"
#include <vector>
#include <iostream>
#include "BusPassenger.h"
#include "BusDriver.h"
#include "Sailor.h"

class ReadyBoat : public Board
{
public:
	std::vector<std::unique_ptr<Passenger>> passengers;
	std::unique_ptr<Driver> driver;
	std::unique_ptr<Sailor> sailor;
	void run();
};


