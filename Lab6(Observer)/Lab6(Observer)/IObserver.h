#pragma once

#include <vector>

//#include "Department.h"

class Department;

class IObserver
{
public:
	virtual void update(std::vector<Department> departments) = 0;
	virtual int getId() = 0;
};


