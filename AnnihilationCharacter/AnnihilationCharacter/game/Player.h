#pragma once
#include "generic\DrawObject.h"

namespace game {
	class Player :public generic::DrawObject{
	public:
		virtual void Update();
	};
}