#pragma once

#include "math/Vector2.h"
#include "2d/Sprite.h"

class Player {
public: // メンバ関数

	/// <summary>
	/// 初期化
	/// </summary>
	Player();

	/// <summary>
	/// 初期化
	/// </summary>
	~Player();

	/// <summary>
	/// 初期化
	/// </summary>
	void Init();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

	void MoveRight();
	void MoveLeft();

private: // メンバ変数
	uint32_t textureHandle_ = 0;
	KamataEngine::Sprite* sprite_ = nullptr;

	KamataEngine::Vector2 pos_ = { 10.0f,30.0f };
	float speed_ = 1.0f;
};