#pragma once
#include "FIO.h"

class Driver
{
public:
	FIO fio;
	char drivingLicence;
	bool onTrip;
	Driver() {};
	Driver(FIO fio, char drivingLicence)
	{
		this->fio = fio;
		this->drivingLicence = drivingLicence;
		this->onTrip = false;
	}
};

