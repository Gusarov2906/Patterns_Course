#include "ControlOffice.h"

Board* ControlOffice::getReadyBoard(BoardBuilder& builder, std::unique_ptr<Driver> driver, std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
	builder.sitDriver(std::move(driver));
	builder.addChildSeat(2);
	builder.sitPassengers(passengers);
	return builder.getBoard();
}

Board * ControlOffice::getReadyBoard(BoardBuilder & builder, std::unique_ptr<Driver> driver, std::unique_ptr<Sailor> sailor, std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
	builder.sitDriver(std::move(driver));
	builder.sitSailor(std::move(sailor));
	builder.addChildSeat(2);
	builder.sitPassengers(passengers);
	return builder.getBoard();
}
