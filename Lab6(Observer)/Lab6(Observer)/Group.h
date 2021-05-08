#pragma once
#include <vector>
#include <string>

#include "Point.h"

class Group
{
public:
	Group(std::string name);
	std::string name;
	std::vector<Point> points;
};

