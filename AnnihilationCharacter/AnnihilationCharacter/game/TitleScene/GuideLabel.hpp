#pragma once
#include "generic\FontShow.hpp"

namespace game {

	//����^�[�L�[�ŃX�^�[�g�ƕ\������
	class GuideLabel :public generic::FontShow{
		int angle;
	public:
		GuideLabel();
		virtual void Update()override;
	};
}