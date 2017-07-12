#pragma once
#include "generic\Scene.hpp"
#include <memory>

namespace game {
	class SelectPlayerControl;
	//プレイヤー選択シーン
	class SelectplayerScene :public generic::Scene{
		std::unique_ptr<SelectPlayerControl> selectPlayerControlPtr;
	public:
		SelectplayerScene();
		virtual void Update();
	};
}