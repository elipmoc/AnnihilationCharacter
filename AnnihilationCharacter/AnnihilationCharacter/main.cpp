#include "DxLib.h"
#include "generic\SceneManager.hpp"
#include "game\TitleScene\TitleScene.hpp"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	//よくある初期化
	dx::ChangeWindowMode(TRUE);
	dx::DxLib_Init();
	dx::SetDrawScreen(DX_SCREEN_BACK);

	//最初に呼ばれるシーンをセット
	auto titleScene = new game::TitleScene();
	generic::SceneManager::GetInstance()->SetScene(titleScene);

	//はいはいループループ
	while (dx::ScreenFlip() == 0 && dx::ProcessMessage() == 0 && dx::ClearDrawScreen() == 0) {
		generic::SceneManager::GetInstance()->SceneUpdate();
	}

	dx::DxLib_End(); // DXライブラリ終了処理
	return 0;
}