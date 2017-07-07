#pragma once
#include "generic\DrawObject.h"

namespace game {

	//title名表示オブジェクト
	class TitleLabel :public generic::DrawObject{
		//フォントハンドル
		const int fontHandle;
	public:
		TitleLabel();
		virtual void Update();
	};
}