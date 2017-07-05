#pragma once
#include <memory>

namespace generic{
	class Scene;

	//�V�[�����Ǘ�����N���X
	class SceneManager {
		std::unique_ptr<Scene> ScenePtr;
		SceneManager():ScenePtr(nullptr) {};
	public:
		static SceneManager* GetInstance() {
			static SceneManager* instance=new SceneManager;
			return instance;
		}
		void SceneUpdate();
		void SetScene(Scene*);
	};

}