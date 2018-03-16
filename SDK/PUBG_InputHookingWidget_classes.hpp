#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InputHookingWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InputHookingWidget.InputHookingWidget_C
// 0x0000 (0x02A0 - 0x02A0)
class UInputHookingWidget_C : public UBlockInputUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(70327);
		return ptr;
	}


	void OnInputAxis(float Scale);
	void OnInputAction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
