#pragma once
#include "generic\DrawObject.h"

namespace game {

	//subtitle���\���I�u�W�F�N�g
	class SubTitleLabel :public generic::DrawObject{
		//�t�H���g�n���h��
		const int fontHandle;
	public:
		SubTitleLabel();
		virtual void Update();
	};
}