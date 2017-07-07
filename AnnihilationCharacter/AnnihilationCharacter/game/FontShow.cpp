#include "FontShow.hpp"
#include "DxLib.h"
namespace game {
	void game::FontShow::Update()
	{
		DrawStringToHandle(this->GetPos().x, this->GetPos().y, text.c_str(), color, fontHandle);
	}
}
