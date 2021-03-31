#pragma once
#include "BoardAnyCar.h"
#include "ReadyDelivery.h"
class BoardPizzaDeliveryGuy: public BoardAnyCar
{
public:
	ReadyDelivery delivery = ReadyDelivery();
	void sitDriver(Driver* driver);
	void sitPassengers(std::vector<AbstactPassenger> &passengers);
	ReadyDelivery getReadyDelivery(Driver* driver, std::vector<AbstactPassenger>& passengers);
};

