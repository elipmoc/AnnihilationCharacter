#pragma once
#include "generic\DrawObject.h"

namespace game {

	//����^�[�L�[�ŃX�^�[�g�ƕ\������
	class GuideLabel :public generic::DrawObject{
		//�t�H���g�n���h��
		const int fontHandle;
		int angle;
	public:
		GuideLabel();
		virtual void Update();
	};
}