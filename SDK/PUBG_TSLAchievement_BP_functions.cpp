// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TSLAchievement_BP_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSLAchievement_BP.TSLAchievement_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATSLAchievement_BP_C::UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(51141);

	ATSLAchievement_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
