#pragma once

#include "Department.h"
#include "IObservable.h"

class Database: public IObservable
{
public:
	Database(tm today);

	void nextDay();
	tm getToday();
	std::vector<Department> departments;
	std::vector<IObserver*> observers;

	void attach(IObserver* observer);
	void detach(IObserver* observer);
	void notify();
private:
	tm today;
};

