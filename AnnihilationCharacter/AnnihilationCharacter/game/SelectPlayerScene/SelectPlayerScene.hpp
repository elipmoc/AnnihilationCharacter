#pragma once
#include "generic\Scene.hpp"
#include <memory>

namespace game {
	class FontShowExtend;
	//プレイヤー選択シーン
	class SelectplayerScene :public generic::Scene{
		std::unique_ptr<FontShowExtend> test;
	public:
		SelectplayerScene();
		virtual void Update();
	};
}