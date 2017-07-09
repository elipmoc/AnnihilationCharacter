#pragma once
#include "Vect.hpp"
namespace generic{
	//��ʂɕ\������I�u�W�F�N�g
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