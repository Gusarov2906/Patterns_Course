#include "FIO.h"
#include <string>

void FIO::output()
{
	std::cout << surname << " " << name << " " << patronymic;
}

std::string FIO::returnFIOString()
{
	return std::string(surname + " " + name + " " + patronymic);
}
