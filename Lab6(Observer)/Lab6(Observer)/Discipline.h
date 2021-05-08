#pragma once

#include "Educator.h"

class Discipline
{
public:
	Discipline(std::string name);
	std::string name;
	std::vector<Educator> educators;
};

