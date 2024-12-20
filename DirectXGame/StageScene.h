#pragma once
#include "IScene.h"
#include "InputHandler.h"
#include "ICommand.h"
#include "Player.h"

class StageScene : public IScene {
private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_ = nullptr;

public:
	StageScene();
	~StageScene();

	void Init() override;
	void Update() override;
	void Draw() override;
};