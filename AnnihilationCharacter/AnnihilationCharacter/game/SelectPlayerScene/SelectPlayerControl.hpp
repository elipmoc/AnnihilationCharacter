#pragma once
#include "generic\DrawObject.hpp"
#include <memory>
#include <array>

namespace game {

	class SelectPlayerCharacter;

	//�v���C���[�I�𐧌�
	class SelectPlayerControl :public generic::DrawObject{
		//�I�ׂ��l���̕����̐�
		static constexpr size_t characterCount = 7;
		//��l���̕�����ޔz��
		const std::unique_ptr<std::array<SelectPlayerCharacter, characterCount>> playerCharacterArrayPtr;
		public:

		SelectPlayerControl();
		virtual void Update();

	};
}