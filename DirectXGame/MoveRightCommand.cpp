#include "MoveRightCommand.h"

void MoveRightCommand::Exec(Player& player)
{
	player.MoveRight();
}