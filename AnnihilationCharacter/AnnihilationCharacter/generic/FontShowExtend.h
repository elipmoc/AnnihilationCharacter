#pragma once
#include "FontShow.hpp"
#include "generic\Vect.hpp"

namespace generic {
	//FontShow���g�����āA�������g��ł���悤�ɁI�I
	class FontShowExtend :public FontShow{
	private:
		Vect scale;
	protected:
		void SetScale(const Vect& _scale) { scale = _scale; }
	public:
		//FontShowExtend() = default;
		template<class ...Args>
		FontShowExtend(Args ...args) :FontShow(args...) {};

		FontShowExtend(int _fontHandle, std::string _text, unsigned int _color,Vect Scale);

		virtual void Update();
	};
}