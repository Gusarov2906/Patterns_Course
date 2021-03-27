#pragma once
#include "Driver.h"

class TaxiDriver: public Driver
{
public:
	char getDrivingLicence();
	void setDrivingLicence(char licence);
private:
	char drivingLicence;
};

