#include "SelectPlayerScene.hpp"
#include "DxLib.h"

namespace game {
	SelectplayerScene::SelectplayerScene()
	{
	}
	void SelectplayerScene::Update()
	{
		DrawString(4, 4, "TEST", GetColor(255, 255, 255));
	}
}
