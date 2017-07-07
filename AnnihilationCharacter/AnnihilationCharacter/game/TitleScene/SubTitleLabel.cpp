#include "SubTitleLabel.hpp"
#include "DxLib.h"
#include "generic\Vect.h"

namespace game {
	SubTitleLabel::SubTitleLabel()
		:FontShow(
			CreateFontToHandle(nullptr, 20, 2, DX_FONTTYPE_ANTIALIASING_EDGE_8X8),
			"`AnnihilationCharacter`",
			GetColor(255, 255, 255)
		) {
		this->SetPos({160, 230});
	}
}
