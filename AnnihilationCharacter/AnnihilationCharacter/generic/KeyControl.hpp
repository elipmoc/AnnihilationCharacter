#pragma once
#include <memory>
#include <array>

namespace generic {

	//キーを管理するクラス
	//スレッドセーフではないシングルトン
	class KeyControl {
		static constexpr size_t keyMax=256;
		std::array<size_t, keyMax> countKey;
	public:
		static KeyControl* GetInstance() {
			static KeyControl* instance = new KeyControl;
			return instance;
		}
		//キー判定を更新
		void UpdateKey();
		//特定キーの情報を得る
		size_t GetKey(int keyCode);
	};

}