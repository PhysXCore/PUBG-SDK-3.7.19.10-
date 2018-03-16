#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PresetColorComboBoxWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C
// 0x0000 (0x0298 - 0x0298)
class UPresetColorComboBoxWidget_C : public UQualityComboBox_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(86611);
		return ptr;
	}


	class UWidget* On_ComboBox_GenerateWidget_1(struct FString* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
