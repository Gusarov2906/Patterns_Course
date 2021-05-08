#include "Database.h"

Database::Database(tm today)
{
	this->today = today;
}

void Database::nextDay()
{
	this->today.tm_mday = this->today.tm_mday+1;
	this->notify();
}

tm Database::getToday()
{
	return this->today;
}

void Database::attach(IObserver* observer)
{
	this->observers.push_back(observer);
}

void Database::detach(IObserver* observer)
{
	int idToDel = observer->getId();
	for (int i = 0; i < this->observers.size(); i++)
	{
		if (this->observers[i]->getId() == idToDel)
			this->observers.erase(this->observers.begin() + i);
	}
}

void Database::notify()
{
	for (int i = 0; i < this->observers.size(); i++)
	{
		this->observers[i]->update(this->departments);
	}
}
