#pragma once
#include "generic\FontShowExtend.h"
#include <string>
namespace game {
	//�v���C���[�I�𕶎��I�u�W�F�N�g
	class SelectPlayerCharacter:public generic::FontShowExtend{
	public:
		void SetPos(const generic::Vect& pos) { FontShowExtend::SetPos(pos);}
		//�\�����镶���ݒ�
		SelectPlayerCharacter(std::string);
	//	virtual void Update();
	};
}