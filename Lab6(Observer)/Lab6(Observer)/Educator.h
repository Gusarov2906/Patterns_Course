#pragma once

#include <vector>

#include "FIO.h"
#include "Group.h"

class Educator
{
public:
	Educator(FIO fio);
	FIO fio;
	std::vector<Group> groups;
};

