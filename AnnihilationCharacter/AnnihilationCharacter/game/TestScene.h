#pragma once
#include "generic\Scene.h"
#include <memory>
namespace game {
	class Player;
	class TestScene :public generic::Scene{
		std::unique_ptr<Player> playerPtr;
	public:
		TestScene();
		virtual void Update();
	};
}