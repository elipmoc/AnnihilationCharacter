#pragma once
#include "generic\DrawObject.hpp"
#include <string>
namespace generic {
	class FontShow :public generic::DrawObject{
	private:
		int fontHandle;
		std::string text;
		unsigned int color;
	protected:
		const std::string GetText()const { return text; }
		void SetText(const std::string& _text) { text=_text; }
		const int GetFontHandle() const{ return fontHandle; }
		const unsigned int GetColor() const{ return color; }
		void SetFontHandle(int _fontHandle) { fontHandle = _fontHandle; };
	public:
		FontShow()=default;

		FontShow(int _fontHandle):
			fontHandle(_fontHandle) {};

		FontShow(int _fontHandle, std::string _text) :
			fontHandle(_fontHandle), text(_text) {};

		FontShow(int _fontHandle,std::string _text,unsigned int _color):
			fontHandle(_fontHandle), text(_text),color(_color) {};

		virtual void Update()override;
	};
}