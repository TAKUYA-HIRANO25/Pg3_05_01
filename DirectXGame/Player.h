#pragma once

#include <3d/WorldTransform.h>
#include <3d/Model.h>
#include <input/Input.h>
#include <math/Vector3.h>

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
	void Initialize(KamataEngine::Model* model, KamataEngine::Camera* camera);

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

private: // メンバ変数
	KamataEngine::WorldTransform worldTransform_;

	KamataEngine::Model* model_ = nullptr;

	KamataEngine::Camera* camera_ = nullptr;

	KamataEngine::ObjectColor objColor_;

	KamataEngine::Input* input_ = nullptr;

	const float kMoveX = 34;
	const float kMoveY = 18;
};