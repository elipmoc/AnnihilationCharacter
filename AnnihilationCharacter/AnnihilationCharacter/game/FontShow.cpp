#include "FontShow.hpp"
#include "DxLib.h"
namespace game {
	void game::FontShow::Update()
	{
		dx::DrawStringToHandle(this->GetPos().x, this->GetPos().y, text.c_str(), color, fontHandle);
	}
}
