// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ConsoleGuideLineWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.SetActiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGuideKeyType                  GuideKeyType                   (Parm, ZeroConstructor, IsPlainOldData)

void UConsoleGuideLineWidget_C::SetActiveWidget(EGuideKeyType GuideKeyType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64562);

	UConsoleGuideLineWidget_C_SetActiveWidget_Params params;
	params.GuideKeyType = GuideKeyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
