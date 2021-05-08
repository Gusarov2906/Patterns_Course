#pragma once

#include "IObserver.h"

class Deanery: public IObserver
{
public:
	Deanery(int id, tm today);
	tm today;
	void update(std::vector<Department> departments);
	int getId();
	void nextDay();
private:
	int id;
};

