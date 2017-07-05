#include "DxLib.h"
#include "generic\SceneManager.h"
#include "game\TestScene.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		auto testScene = new game::TestScene();
		generic::SceneManager::GetInstance()->SetScene(testScene);
		generic::SceneManager::GetInstance()->SceneUpdate();
	}

	DxLib_End(); // DXライブラリ終了処理
	return 0;
}