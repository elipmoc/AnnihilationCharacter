#pragma once
#include "generic\FontShow.hpp"

namespace game {

	//えんターキーでスタートと表示する
	class GuideLabel :public generic::FontShow{
		int angle;
	public:
		GuideLabel();
		virtual void Update()override;
	};
}