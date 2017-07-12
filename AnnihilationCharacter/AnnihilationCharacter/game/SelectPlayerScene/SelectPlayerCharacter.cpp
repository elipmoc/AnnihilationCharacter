#include "SelectPlayerCharacter.hpp"
#include "DxLib.h"

namespace game {
	SelectPlayerCharacter::SelectPlayerCharacter(std::string _text):
		FontShowExtend(
			dx::CreateFontToHandle(nullptr, 32, 1, DX_FONTTYPE_ANTIALIASING_EDGE_8X8),
			_text,
			dx::GetColor(20, 255, 255),
			{1,1}
		)
	{
	}
}
