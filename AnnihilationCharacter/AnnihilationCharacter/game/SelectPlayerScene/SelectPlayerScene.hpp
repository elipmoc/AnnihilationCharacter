#pragma once
#include "generic\Scene.hpp"
#include <memory>

namespace game {
	class SelectPlayerControl;
	//�v���C���[�I���V�[��
	class SelectplayerScene :public generic::Scene{
		std::unique_ptr<SelectPlayerControl> selectPlayerControlPtr;
	public:
		SelectplayerScene();
		virtual void Update();
	};
}