#include "FontShow.hpp"
#include "DxLib.h"
namespace generic {
	void FontShow::Update()
	{
		dx::DrawStringToHandle(this->GetPos().x, this->GetPos().y, text.c_str(), color, fontHandle);
	}
}
