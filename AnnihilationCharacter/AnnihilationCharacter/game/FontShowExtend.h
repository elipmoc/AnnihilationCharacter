#pragma once
#include "FontShow.hpp"
#include "generic\Vect.hpp"

namespace game {
	//FontShow‚ğŠg’£‚µ‚ÄA•¶š‚ğŠg‘å‚Å‚«‚é‚æ‚¤‚ÉII
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