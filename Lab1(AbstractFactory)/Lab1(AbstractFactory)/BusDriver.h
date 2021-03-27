#pragma once
#include "Driver.h"

class BusDriver: public Driver
{
public:
	char getDrivingLicence();
	void setDrivingLicence(char licence);
	BusDriver() {};
private:
	char drivingLicence;
};

