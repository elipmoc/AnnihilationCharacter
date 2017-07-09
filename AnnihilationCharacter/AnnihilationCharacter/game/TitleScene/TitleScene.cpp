#include "TitleScene.hpp"
#include "TitleLabel.hpp"
#include "SubTitleLabel.hpp"
#include "GuideLabel.hpp"
#include "generic\SceneManager.hpp"
#include "game\SelectPlayerScene\SelectPlayerScene.hpp"
#include "DxLib.h"

namespace game {
	TitleScene::TitleScene()
	{
		auto titleLabel=new TitleLabel;
		titleLabelPtr.reset(titleLabel);
		auto subTitleLabel = new SubTitleLabel;
		subTitleLabelPtr.reset(subTitleLabel);
		auto guideLabel = new GuideLabel;
		guideLabelPtr.reset(guideLabel);
	}
	void TitleScene::Update()
	{
		subTitleLabelPtr->Update();
		titleLabelPtr->Update();
		guideLabelPtr->Update();
		if (dx::CheckHitKey(KEY_INPUT_RETURN) == 1)
			generic::SceneManager::GetInstance()->SetScene(new SelectplayerScene);
		
	}
}
