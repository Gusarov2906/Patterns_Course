#pragma once
#include <vector>
#include "Driver.h"
#include "AbstractPassenger.h"
#include "Board.h"
#include "Sailor.h"

class BoardBuilder
{
public:
	virtual void sitDriver(std::unique_ptr<Driver> driver) {};
	virtual void sitSailor(std::unique_ptr<Sailor> sailor) {};
	virtual void sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers){};
	virtual void addChildSeat(int number){};
	virtual Board* getBoard() = 0;
};

