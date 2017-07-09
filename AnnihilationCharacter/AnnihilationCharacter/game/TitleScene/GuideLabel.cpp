#include "GuideLabel.hpp"
#include "DxLib.h"
#include "generic\Utility.hpp"
#include <math.h>
game::GuideLabel::GuideLabel() :
	FontShow(
		dx::CreateFontToHandle(nullptr, 16, 1, DX_FONTTYPE_ANTIALIASING_EDGE_8X8),
		"Start Enter",
		dx::GetColor(20, 255, 255)
	),
	angle(0)
{
	this->SetPos({260, 320});
}

void game::GuideLabel::Update()
{
	dx::SetDrawBlendMode(DX_BLENDMODE_ALPHA,128-127*sin(generic::ToRad<double>(angle+=3)));
	FontShow::Update();
	dx::SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
}
