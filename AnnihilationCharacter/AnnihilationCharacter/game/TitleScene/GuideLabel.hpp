#pragma once
#include "generic\DrawObject.h"

namespace game {

	//えんターキーでスタートと表示する
	class GuideLabel :public generic::DrawObject{
		//フォントハンドル
		const int fontHandle;
		int angle;
	public:
		GuideLabel();
		virtual void Update();
	};
}