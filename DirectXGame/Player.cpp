#include "Player.h"
#include "myMath.h"
#include "MathUilityForText.h"
#include <imgui.h>
#include <algorithm>
#include "base/TextureManager.h"

using namespace KamataEngine;

Player::Player()
{

}

Player::~Player()
{
	delete sprite_;
}

void Player::Init()
{
	textureHandle_ = KamataEngine::TextureManager::Load("white1x1.png");

	sprite_ = KamataEngine::Sprite::Create(textureHandle_, { 0,0 });
}

void Player::Update()
{
	sprite_->SetPosition(pos_);
}

void Player::Draw()
{
	sprite_->Draw();
}

void Player::MoveRight()
{
	this->pos_.x += this->speed_;
}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;
}

