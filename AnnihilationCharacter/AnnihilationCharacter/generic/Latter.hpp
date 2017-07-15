#pragma once
#include <string>
#include "DrawObject.hpp"
#include "generic\Utility.hpp"
#include "DxLib.h"
namespace generic{
	
	//��ʂɕ�����\������I�u�W�F�N�g
	class Letter :DrawObject
	{

		//�t�H���g�n���h��
		int fontHandle;

		//�����̃J���[
		unsigned int color;

		//������̏c������
		Vect rect;

		//�\�����镶��
		std::string text;

		//�����g�嗦
		Vect scale;

		//���S�_
		Vect anchor;

		//�p�x
		double angle;

		//���ߓx
		int opacity=0;

	protected:
		//�Q�b�^�[�Z�b�^�[
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
			//�R���X�g���N�^
		Letter(const std::string& _text, unsigned int _color)
		{
			color = _color;
			SetText(_text);
		}
		Letter(const std::string& _text) {
			SetText(_text);
		}
		Letter() {}

		//�`�揈��
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