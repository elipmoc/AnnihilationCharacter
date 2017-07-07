#include "GuideLabel.hpp"
#include "DxLib.h"
#include "generic\Utility.hpp"
#include <math.h>
game::GuideLabel::GuideLabel():
	fontHandle(CreateFontToHandle(nullptr, 16, 1, DX_FONTTYPE_ANTIALIASING_EDGE_8X8)),
	angle(0)
{}

void game::GuideLabel::Update()
{
	SetDrawBlendMode(DX_BLENDMODE_ALPHA,128-127*sin(generic::ToRad<double>(angle+=3)));
	DrawStringToHandle(260, 320, "Start Enter", GetColor(20, 255, 255), fontHandle);
	SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
}
