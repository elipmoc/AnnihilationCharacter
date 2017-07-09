#pragma once
#include "generic\DrawObject.hpp"
#include <string>
namespace game {
	//プレイヤー選択文字オブジェクト
	class SelectPlayerCharacter:public generic::DrawObject{
		const int fontHandle;
		std::string text;
		int fontSize;
	public:
		SelectPlayerCharacter();
		//主人公の文字設定
		void SetText(std::string);
		virtual void Update();
	};
}