#pragma once
#include "ICommand.h"

class MoveLeftCommand : public ICommand {
public:
	void Exec(Player& player) override;
};