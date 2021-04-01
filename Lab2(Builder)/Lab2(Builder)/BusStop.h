#pragma once
#include<iostream>
#include<vector>
#include"Passenger.h"
#include"Driver.h"
class BusStop
{
public:
	std::vector<std::unique_ptr<Driver>> drivers;
	std::vector<std::unique_ptr<AbstactPassenger>> passengers;
	void output();
};

