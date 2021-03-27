#pragma once
#include<iostream>
#include<vector>
#include"Passenger.h"
#include"Driver.h"
class BusStop
{
public:
	std::vector<Driver> drivers;
	std::vector<Passenger> passengers;
	void output();
};

