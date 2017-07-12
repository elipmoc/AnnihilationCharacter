#include "KeyControl.hpp"
#include "DxLib.h"

namespace generic {

	void KeyControl::UpdateKey()
	{
		static char tempKey[keyMax];
		dx::GetHitKeyStateAll(tempKey);
		for (size_t i = 0; i < keyMax; i++) {
			if (tempKey[i] != 0)
				countKey[i]++;     
			else
				countKey[i] = 0; 
		}

	}

	size_t KeyControl::GetKey(int keyCode)
	{
		return countKey[keyCode];
	}

}
