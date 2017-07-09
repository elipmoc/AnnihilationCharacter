#include "SelectPlayerScene.hpp"
#include "game\FontShowExtend.h"
#include "DxLib.h"

namespace game {
	SelectplayerScene::SelectplayerScene():
		test(new FontShowExtend (
			dx::CreateFontToHandle(nullptr, 16, 1, DX_FONTTYPE_ANTIALIASING_EDGE_8X8),
			"Start Enter",
			dx::GetColor(20, 255, 255),
			{2,2}
		))
	{
	}
	void SelectplayerScene::Update()
	{
		test->Update();
	}
}
