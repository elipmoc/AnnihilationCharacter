#pragma once
#include "FontShow.hpp"
#include "generic\Vect.hpp"

namespace game {
	//FontShowを拡張して、文字を拡大できるように！！
	class FontShowExtend :public game::FontShow{
	private:
		generic::Vect scale;
	public:
		//FontShowExtend() = default;
		template<class ...Args>
		FontShowExtend(Args ...args) :FontShow(args...) {};

		FontShowExtend(int _fontHandle, std::string _text, unsigned int _color,generic::Vect Scale);

		virtual void Update();
	};
}