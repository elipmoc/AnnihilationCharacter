#pragma once
#include "generic\DrawObject.hpp"
#include <string>
namespace game {
	class FontShow :public generic::DrawObject{
	private:
		int fontHandle;
		std::string text;
		unsigned int color;
	protected:
		const std::string GetText() { return text; }
		const int GetFontHandle() { return fontHandle; }
		const unsigned int GetColor() { return color; }
		void SetFontHandle(int _fontHandle) { fontHandle = _fontHandle; };
	public:
		FontShow()=default;

		FontShow(int _fontHandle):
			fontHandle(_fontHandle) {};

		FontShow(int _fontHandle, std::string _text) :
			fontHandle(_fontHandle), text(_text) {};

		FontShow(int _fontHandle,std::string _text,unsigned int _color):
			fontHandle(_fontHandle), text(_text),color(_color) {};

		virtual void Update();
	};
}