#pragma once

#include <iostream>

#include "Discipline.h"

class Department
{
public:
	Department(std::string name);
	std::string name;
	std::vector<Discipline> disciplines;
	void warning(std::string mes);
};

