#include "Player.h"
#include "myMath.h"
#include "MathUilityForText.h"
#include <imgui.h>
#include <algorithm>

using namespace KamataEngine;

Player::Player()
{

}

Player::~Player()
{

}

void Player::Initialize(Model* model, Camera* camera)
{
	model_ = model;

	camera_ = camera;

	objColor_.Initialize();

	input_ = Input::GetInstance();

	worldTransform_.Initialize();
}

void Player::Update()
{
	ImGui::Begin("Debug1");
	ImGui::DragFloat3("Player", &worldTransform_.translation_.x, 0.1f);
	ImGui::End();


	Vector3 move = { 0,0,0 };

	const float kCharacterSpeed = 0.2f;

	if (input_->PushKey(DIK_LEFT)) {
		move.x -= kCharacterSpeed;
	}
	else if (input_->PushKey(DIK_RIGHT)) {
		move.x += kCharacterSpeed;
	}
	if (input_->PushKey(DIK_UP)) {
		move.y += kCharacterSpeed;
	}
	else if (input_->PushKey(DIK_DOWN)) {
		move.y -= kCharacterSpeed;
	}

	worldTransform_.translation_ += move;

	worldTransform_.translation_.x = std::clamp(worldTransform_.translation_.x, -kMoveX, kMoveX);

	worldTransform_.translation_.y = std::clamp(worldTransform_.translation_.y, -kMoveY, kMoveY);

	worldTransform_.matWorld_ = MakeAffineMatrix(worldTransform_.scale_, worldTransform_.rotation_, worldTransform_.translation_);
	
	worldTransform_.TransferMatrix();

}

void Player::Draw()
{
	model_->Draw(worldTransform_, *camera_, &objColor_);
}
