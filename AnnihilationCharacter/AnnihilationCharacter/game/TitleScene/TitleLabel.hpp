#pragma once
#include "generic\DrawObject.h"

namespace game {

	//title���\���I�u�W�F�N�g
	class TitleLabel :public generic::DrawObject{
		//�t�H���g�n���h��
		const int fontHandle;
	public:
		TitleLabel();
		virtual void Update();
	};
}