#pragma once
#include <string>
#include "DrawObject.hpp"
#include "generic\Utility.hpp"
#include "DxLib.h"
namespace generic{
	
	//画面に文字を表示するオブジェクト
	class Letter :DrawObject
	{

		//フォントハンドル
		int fontHandle;

		//文字のカラー
		unsigned int color;

		//文字列の縦幅横幅
		Vect rect;

		//表示する文字
		std::string text;

		//文字拡大率
		Vect scale;

		//中心点
		Vect anchor;

		//角度
		double angle;

		//透過度
		int opacity=0;

	protected:
		//ゲッターセッター
		virtual const Vect GetScale() const{ return scale; }
		virtual void SetScale(const Vect& _scale) { scale = _scale; }

		virtual const std::string GetText()const { return text; }
		virtual void SetText(const std::string& _text)
		{
			text = _text;
			rect.x = dx::GetDrawStringWidth(text.c_str, text.length());
		}

		virtual const double GetAngle()const { return angle; }
		virtual void SetAngle(const double _angle){ angle=_angle; }

		virtual const Vect GetAnchor()const { return anchor; }
		virtual void SetAnchor(const Vect& _anchor) { anchor = _anchor; }

		virtual const unsigned int GetColor()const { return color; }
		virtual void SetColor(const unsigned int _color){ color=_color; }

	public:
			//コンストラクタ
		Letter(const std::string& _text, unsigned int _color)
		{
			color = _color;
			SetText(_text);
		}
		Letter(const std::string& _text) {
			SetText(_text);
		}
		Letter() {}

		//描画処理
		void Update()override
		{

			dx::SetDrawBlendMode(DX_BLENDMODE_ALPHA, opacity);
			dx::DrawRotaStringToHandle(GetPos().x, GetPos().y,
				scale.x, scale.y, anchor.x*rect.x, anchor.y * 16,
				generic::ToRad(angle), color,fontHandle, color, FALSE, text.c_str());
			dx::SetDrawBlendMode(DX_BLENDGRAPHTYPE_NORMAL, 0);
		}
	};
}