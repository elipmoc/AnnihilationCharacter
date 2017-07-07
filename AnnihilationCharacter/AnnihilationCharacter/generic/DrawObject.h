#pragma once
#include "Vect.h"
namespace generic{
	//画面に表示するオブジェクト
	class DrawObject {
	private: 
		Vect pos;
	protected:
		virtual const Vect GetPos()const { return pos; }
		virtual void SetPos(const Vect& _pos) { pos = _pos; }
	public:
		virtual void Update() = 0;
		virtual ~DrawObject() {};
	};
}