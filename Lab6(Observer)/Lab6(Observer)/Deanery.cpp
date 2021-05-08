#include "Deanery.h"
#include "Department.h"

Deanery::Deanery(int id, tm today)
{
	this->id = id;
	this->today = today;
}

int diffDays(tm tm1, tm tm2)
{
	if (tm1.tm_mon == tm2.tm_mon)
		return (tm1.tm_mday - tm2.tm_mday);
	else
		return 0;
}

void Deanery::update(std::vector<Department> departments)
{
	for (int i = 0; i < departments.size(); i++)
	{
		for (int j = 0; j < departments[i].disciplines.size(); j++)
		{
			for (int k = 0; k < departments[i].disciplines[j].educators.size(); k++)
			{
				for (int l = 0; l < departments[i].disciplines[j].educators[k].groups.size(); l++)
				{
					bool warning = true;
					for (int m = 0; m < departments[i].disciplines[j].educators[k].groups[l].points.size(); m++)
					{
						//std::cout << this->today.tm_mday << " " << departments[i].disciplines[j].educators[k].groups[l].points[m].datetime.tm_mday << " " << difftime(mktime(&this->today), mktime(&departments[i].disciplines[j].educators[k].groups[l].points[m].datetime)) << std::endl;
						if (diffDays((this->today), (departments[i].disciplines[j].educators[k].groups[l].points[m].datetime)) < 7)
						{
							warning = false;
						}
					}
					if (warning)
					{
						departments[i].warning("Discipline: " + departments[i].disciplines[j].name +
							" Educator: " + departments[i].disciplines[j].educators[k].fio.returnFIOString() +
							" Group: " + departments[i].disciplines[j].educators[k].groups[l].name +
							" no points last week.\n");
					}
				}
			}
		}
	}
}

int Deanery::getId()
{
	return this->id;
}

void Deanery::nextDay()
{
	this->today.tm_mday = this->today.tm_mday + 1;
}
