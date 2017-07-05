#include "TestScene.h"
#include "Player.h"

namespace game {
	TestScene::TestScene(){
		auto player=new Player;
		playerPtr.reset(player);
	}
	void TestScene::Update()
	{
		playerPtr->Update();
	}
}
