#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GamepadHelpInterface_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GamepadHelpInterface.GamepadHelpInterface_C
// 0x0000 (0x0028 - 0x0028)
class UGamepadHelpInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(85962);
		return ptr;
	}


	void GetGamePadHelpWidgetClass(class UClass** GuideClass);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
