#include "TitleLabel.hpp"
#include "DxLib.h"
namespace game {
	TitleLabel::TitleLabel():
		FontShow(
			dx::CreateFontToHandle(nullptr,60, 4, DX_FONTTYPE_ANTIALIASING_EDGE_8X8),
			"���ŕ���",
			dx::GetColor(255,255,255)
		)
	{
		this->SetPos({ 180,150 });
	}
}