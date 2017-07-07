#include "TitleLabel.hpp"
#include "DxLib.h"
namespace game {
	TitleLabel::TitleLabel():fontHandle(CreateFontToHandle(nullptr,60, 4, DX_FONTTYPE_ANTIALIASING_EDGE_8X8))
	{
	}
	void TitleLabel::Update()
	{
		DrawStringToHandle(180, 150, "è¡ñ≈ï∂éö", GetColor(255, 255, 255),fontHandle);
	}
}