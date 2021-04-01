#pragma once
#include "Board.h"
#include "BoardBuilder.h"

class ControlOffice
{
public:
	Board* getReadyBoard(BoardBuilder& builder, std::unique_ptr<Driver> driver, std::vector<std::unique_ptr<AbstactPassenger>>& passengers);
};

