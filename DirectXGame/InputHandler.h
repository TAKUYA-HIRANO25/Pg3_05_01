#pragma once
#include "ICommand.h"
#include "input/Input.h"

class InputHandler {
public:
	void Init();

	ICommand* HandelerInput();

	void AssignMoveLeftCommand2PressKeyA();

	void AssingMoveRightCommand2PressKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;

	KamataEngine::Input* input_ = nullptr;
};