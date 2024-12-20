#pragma once
#include "ICommand.h"

class MoveRightCommand : public ICommand {
public:
	void Exec(Player& player) override;
};