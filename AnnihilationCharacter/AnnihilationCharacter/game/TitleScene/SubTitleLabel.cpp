#include "SubTitleLabel.hpp"
#include "DxLib.h"

game::SubTitleLabel::SubTitleLabel()
	:fontHandle(CreateFontToHandle(nullptr, 20, 2, DX_FONTTYPE_ANTIALIASING_EDGE_8X8))
{
}

void game::SubTitleLabel::Update()
{
	DrawStringToHandle(160, 230, "Å`AnnihilationCharacterÅ`", GetColor(255, 255, 255), fontHandle);
}
