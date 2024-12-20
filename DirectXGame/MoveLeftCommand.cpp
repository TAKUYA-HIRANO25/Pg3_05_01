#include "MoveLeftCommand.h"

void MoveLeftCommand::Exec(Player& player)
{
	player.MoveLeft();
}