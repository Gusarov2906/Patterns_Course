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
	std::vector<std::unique_ptr<TaxiPassenger>> passengers;
	std::unique_ptr<TaxiDriver> driver;
	int numOfChildSeats = 0;
	void run();
};

