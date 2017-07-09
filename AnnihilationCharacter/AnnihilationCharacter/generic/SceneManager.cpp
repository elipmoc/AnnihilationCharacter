#include "SceneManager.hpp"
#include "Scene.hpp"
namespace generic{
	void SceneManager::SceneUpdate()
	{
		ScenePtr->Update();
	}

	void SceneManager::SetScene(Scene* scene) {
		ScenePtr.reset(scene);
	}

}
