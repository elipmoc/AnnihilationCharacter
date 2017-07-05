#pragma once
#include "Vect.h"
namespace generic{
	//画面に表示するオブジェクト
	class DrawObject {
	protected: 
		Vect pos;
	public:
		virtual void Update() = 0;
		virtual ~DrawObject() {};
	};
}