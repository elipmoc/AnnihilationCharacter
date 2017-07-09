#include "DxLib.h"
#include "generic\SceneManager.hpp"
#include "game\TitleScene\TitleScene.hpp"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	auto titleScene = new game::TitleScene();
	generic::SceneManager::GetInstance()->SetScene(titleScene);
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		generic::SceneManager::GetInstance()->SceneUpdate();
	}

	DxLib_End(); // DXライブラリ終了処理
	return 0;
}