#include "SceneManager.h"
#include "Scene.h"
namespace generic{
	void SceneManager::SceneUpdate()
	{
		ScenePtr->Update();
	}

	void SceneManager::SetScene(Scene* scene) {
		ScenePtr.reset(scene);
	}

}
