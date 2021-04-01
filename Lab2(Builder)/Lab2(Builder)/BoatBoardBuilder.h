#pragma once
#include "BoardBuilder.h"
#include "ReadyBoat.h"

class BoatBoardBuilder: public BoardBuilder
{
public:
	ReadyBoat boat;

	BoatBoardBuilder();

	void sitDriver(std::unique_ptr<Driver> driver);
	void sitPassengers(std::vector<std::unique_ptr<AbstactPassenger>>& passengers);
	void sitSailor(std::unique_ptr<Sailor> driver);
	ReadyBoat* getReadyBoat(std::unique_ptr<Driver> driver, std::unique_ptr<Sailor> sailor, std::vector< std::unique_ptr<AbstactPassenger>>& passengers);
	Board* getBoard();
};

