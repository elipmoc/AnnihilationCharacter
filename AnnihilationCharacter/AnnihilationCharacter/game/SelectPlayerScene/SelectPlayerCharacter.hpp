#pragma once
#include "generic\FontShowExtend.h"
#include <string>
namespace game {
	//プレイヤー選択文字オブジェクト
	class SelectPlayerCharacter:public generic::FontShowExtend{
	public:
		void SetPos(const generic::Vect& pos) { FontShowExtend::SetPos(pos);}
		//表示する文字設定
		SelectPlayerCharacter(std::string);
	//	virtual void Update();
	};
}