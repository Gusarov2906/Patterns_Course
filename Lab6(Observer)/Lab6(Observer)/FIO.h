#pragma once
#include <iostream>
class FIO
{
public:
	std::string name;
	std::string surname;
	std::string patronymic;
	void output();
	std::string returnFIOString();
	FIO() {};
	FIO(std::string nameAndSurname)
	{
		size_t pos = 0;
		std::string delimiter = " ";
		pos = nameAndSurname.find(delimiter);
		name = nameAndSurname.substr(0, pos);
		nameAndSurname.erase(0, pos + delimiter.length());
		surname = nameAndSurname;
	}
};
