#pragma once
#include "generic\Scene.hpp"
#include <memory>

namespace game {
	class FontShowExtend;
	//�v���C���[�I���V�[��
	class SelectplayerScene :public generic::Scene{
		std::unique_ptr<FontShowExtend> test;
	public:
		SelectplayerScene();
		virtual void Update();
	};
}