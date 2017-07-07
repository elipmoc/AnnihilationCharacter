#include "TitleScene.hpp"
#include "TitleLabel.hpp"
#include "SubTitleLabel.hpp"
#include "GuideLabel.hpp"

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
	}
}
