#pragma once
#include "game\FontShow.hpp"

namespace game {

	//����^�[�L�[�ŃX�^�[�g�ƕ\������
	class GuideLabel :public FontShow{
		int angle;
	public:
		GuideLabel();
		virtual void Update();
	};
}