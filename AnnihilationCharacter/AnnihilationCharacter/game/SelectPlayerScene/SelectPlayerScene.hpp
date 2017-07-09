#pragma once
#include "generic\Scene.hpp"

namespace game {
	//プレイヤー選択シーン
	class SelectplayerScene :public generic::Scene{
	public:
		SelectplayerScene();
		virtual void Update();
	};
}