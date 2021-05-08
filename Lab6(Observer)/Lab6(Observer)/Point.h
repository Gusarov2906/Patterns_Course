#pragma once
#include <ctime>

class Point
{
public:
	Point(double averagePoints, tm datetime);
	double averagePoints;
	tm datetime;
};

