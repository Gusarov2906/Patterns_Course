#pragma once
#include "BoardAnyCar.h"
#include "ReadyTaxi.h"
class BoardTaxi:public BoardAnyCar
{
public:
	ReadyTaxi taxi = ReadyTaxi();
	void sitDriver(Driver* driver);
	void sitPassengers(std::vector<AbstactPassenger>& passengers);
	ReadyTaxi getReadyTaxi(Driver* driver, std::vector<AbstactPassenger>& passengers);

};

