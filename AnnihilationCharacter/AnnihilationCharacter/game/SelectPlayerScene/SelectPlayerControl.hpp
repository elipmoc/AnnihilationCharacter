#pragma once
#include "generic\DrawObject.hpp"
#include <memory>
#include <array>

namespace game {

	class SelectPlayerCharacter;

	//プレイヤー選択制御
	class SelectPlayerControl :public generic::DrawObject{
		//選べる主人公の文字の数
		static constexpr size_t characterCount = 7;
		//主人公の文字種類配列
		const std::unique_ptr<std::array<SelectPlayerCharacter, characterCount>> playerCharacterArrayPtr;
		public:

		SelectPlayerControl();
		virtual void Update()override;

	};
}