#include "FontShowExtend.h"
#include "DxLib.h"

namespace generic {

	FontShowExtend::FontShowExtend(int _fontHandle, std::string _text, unsigned int _color, Vect _scale) :
		FontShow(_fontHandle, _text, _color),scale(_scale)
	{
	}

	void FontShowExtend::Update()
	{
		dx::DrawExtendStringToHandle(GetPos().x, GetPos().y, scale.x, scale.y, GetText().c_str(), GetColor(), GetFontHandle());
	}
}
