#pragma once
#include "Vect.h"
namespace generic{
	//��ʂɕ\������I�u�W�F�N�g
	class DrawObject {
	protected: 
		Vect pos;
	public:
		virtual void Update() = 0;
		virtual ~DrawObject() {};
	};
}