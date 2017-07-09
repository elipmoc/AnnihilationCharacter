#include "DxLib.h"
#include "generic\SceneManager.hpp"
#include "game\TitleScene\TitleScene.hpp"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	//よくある初期化
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	//最初に呼ばれるシーンをセット
	auto titleScene = new game::TitleScene();
	generic::SceneManager::GetInstance()->SetScene(titleScene);

	//はいはいループループ
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		generic::SceneManager::GetInstance()->SceneUpdate();
	}

	DxLib_End(); // DXライブラリ終了処理
	return 0;
}