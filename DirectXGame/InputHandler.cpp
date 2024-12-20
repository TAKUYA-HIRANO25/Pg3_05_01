#include "InputHandler.h"
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"

void InputHandler::Init()
{
	input_ = KamataEngine::Input::GetInstance();
}

ICommand* InputHandler::HandelerInput()
{
	if (input_->PushKey(DIK_D)) {
		return pressKeyD_;
	}
	else if (input_->PushKey(DIK_A)) {
		return pressKeyA_;
	}
	return nullptr;
}

void InputHandler::AssignMoveLeftCommand2PressKeyA()
{
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}

void InputHandler::AssingMoveRightCommand2PressKeyD()
{
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;
}
