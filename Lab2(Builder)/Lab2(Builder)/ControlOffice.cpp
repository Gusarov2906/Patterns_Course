#include "ControlOffice.h"

Board* getReadyBoard(BoardBuilder& builder, std::unique_ptr<Driver> driver, std::vector<std::unique_ptr<AbstactPassenger>>& passengers)
{
    builder.sitDriver(driver);
    builder.sitPassengers(passengers);
    builder.addChildSeat(1);
    return builder.getBoard();
}
