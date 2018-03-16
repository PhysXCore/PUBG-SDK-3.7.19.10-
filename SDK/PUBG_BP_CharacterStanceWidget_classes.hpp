#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_CharacterStanceWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_CharacterStanceWidget.BP_CharacterStanceWidget_C
// 0x0000 (0x0320 - 0x0320)
class UBP_CharacterStanceWidget_C : public UCharacterStanceBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(70144);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
