#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapGridWidget_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C
// 0x0000 (0x07B0 - 0x07B0)
class UMapGridWidget_C : public UMapGridWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(70296);
		return ptr;
	}


	struct FSlateBrush Get_Replayzone_Brush_2();
	struct FSlateBrush Get_Replayzone_Brush_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
