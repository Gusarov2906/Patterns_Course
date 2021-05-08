#include "Department.h"

Department::Department(std::string name)
{
	this->name = name;
}

void Department::warning(std::string mes)
{
	std::cout << "Department warning!!! " << mes;
}
