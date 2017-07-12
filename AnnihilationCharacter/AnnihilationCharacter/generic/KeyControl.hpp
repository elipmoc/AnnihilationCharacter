#pragma once
#include <memory>
#include <array>

namespace generic {

	//�L�[���Ǘ�����N���X
	//�X���b�h�Z�[�t�ł͂Ȃ��V���O���g��
	class KeyControl {
		static constexpr size_t keyMax=256;
		std::array<size_t, keyMax> countKey;
	public:
		static KeyControl* GetInstance() {
			static KeyControl* instance = new KeyControl;
			return instance;
		}
		//�L�[������X�V
		void UpdateKey();
		//����L�[�̏��𓾂�
		size_t GetKey(int keyCode);
	};

}