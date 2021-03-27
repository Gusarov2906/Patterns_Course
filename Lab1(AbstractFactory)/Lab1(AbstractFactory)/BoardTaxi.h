#pragma once
#include "BoardAnyCar.h"
#include "ReadyTaxi.h"
class BoardTaxi:public BoardAnyCar
{
public:
	ReadyTaxi taxi = ReadyTaxi();
	void sitDriver(Driver* driver);
	void sitPassengers(std::vector<Passenger>& passengers);
	ReadyTaxi getReadyTaxi(Driver* driver, std::vector<Passenger>& passengers);

};

