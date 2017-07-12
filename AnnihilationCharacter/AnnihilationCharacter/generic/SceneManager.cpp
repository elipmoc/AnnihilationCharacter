#include "SceneManager.hpp"
#include "Scene.hpp"
#include "KeyControl.hpp"

namespace generic{
	void SceneManager::SceneUpdate()
	{
		KeyControl::GetInstance()->UpdateKey();
		ScenePtr->Update();
	}

	void SceneManager::SetScene(Scene* scene) {
		ScenePtr.reset(scene);
	}

}
