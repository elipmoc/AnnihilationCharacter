#pragma once
#include "game\FontShow.hpp"

namespace game {

	//えんターキーでスタートと表示する
	class GuideLabel :public FontShow{
		int angle;
	public:
		GuideLabel();
		virtual void Update();
	};
}