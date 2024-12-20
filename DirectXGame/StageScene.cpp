#include "StageScene.h"

StageScene::StageScene()
{
}

StageScene::~StageScene()
{
	delete inputHandler_;
	delete player_;
}

void StageScene::Init()
{
	inputHandler_ = new InputHandler();
	inputHandler_->Init();

	inputHandler_->AssingMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();
	player_->Init();
}

void StageScene::Update()
{
	iCommand_ = inputHandler_->HandelerInput();

	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
}

void StageScene::Draw()
{
	player_->Draw();
}
