#include "SubTitleLabel.hpp"
#include "DxLib.h"
#include "generic\Vect.hpp"

namespace game {
	SubTitleLabel::SubTitleLabel()
		:FontShow(
			dx::CreateFontToHandle(nullptr, 20, 2, DX_FONTTYPE_ANTIALIASING_EDGE_8X8),
			"`AnnihilationCharacter`",
			dx::GetColor(255, 255, 255)
		) {
		this->SetPos({160, 230});
	}
}
