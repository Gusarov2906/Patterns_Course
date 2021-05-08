#pragma once

#include "IObserver.h"

class IObservable
{
public:
	virtual void attach(IObserver* observer) = 0;
	virtual void detach(IObserver* observer) = 0;
	virtual void notify() = 0;
};

