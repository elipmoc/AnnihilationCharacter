#pragma once
#include "generic\DrawObject.hpp"
#include <string>
namespace game {
	//�v���C���[�I�𕶎��I�u�W�F�N�g
	class SelectPlayerCharacter:public generic::DrawObject{
		const int fontHandle;
		std::string text;
		int fontSize;
	public:
		SelectPlayerCharacter();
		//��l���̕����ݒ�
		void SetText(std::string);
		virtual void Update();
	};
}