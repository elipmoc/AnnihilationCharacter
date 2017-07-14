#pragma once
#include "generic\Scene.hpp"
#include <memory>
namespace game {
	class TitleLabel;
	class SubTitleLabel;
	class GuideLabel;
	class TitleScene :public generic::Scene{
		std::unique_ptr<TitleLabel> titleLabelPtr;
		std::unique_ptr<SubTitleLabel> subTitleLabelPtr;
		std::unique_ptr<GuideLabel> guideLabelPtr;
	public:
		TitleScene();
		virtual void Update()override;
	};
}