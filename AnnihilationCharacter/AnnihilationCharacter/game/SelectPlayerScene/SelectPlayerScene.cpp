#include "SelectPlayerScene.hpp"
#include "SelectPlayerControl.hpp"
#include "DxLib.h"

namespace game {
	SelectplayerScene::SelectplayerScene():
		selectPlayerControlPtr(new SelectPlayerControl)
	{
	}
	void SelectplayerScene::Update()
	{
		selectPlayerControlPtr->Update();
	}
}
