#include "SelectPlayerControl.hpp"
#include "SelectPlayerCharacter.hpp"

namespace game {

	SelectPlayerControl::SelectPlayerControl() :
		playerCharacterArrayPtr(
			new std::array<SelectPlayerCharacter, characterCount>
	{
		"��", "�X", "��", "�O", "��", "�b", "��"
	}
	)
	{
		(*playerCharacterArrayPtr)[0].SetPos({ 50,50 });
	}

	void SelectPlayerControl::Update()
	{
		for (auto&& item : *playerCharacterArrayPtr)
			item.Update();
	}
}
