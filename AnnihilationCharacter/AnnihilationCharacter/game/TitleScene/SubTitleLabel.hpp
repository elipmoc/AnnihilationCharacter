#pragma once
#include "generic\DrawObject.h"

namespace game {

	//subtitle名表示オブジェクト
	class SubTitleLabel :public generic::DrawObject{
		//フォントハンドル
		const int fontHandle;
	public:
		SubTitleLabel();
		virtual void Update();
	};
}