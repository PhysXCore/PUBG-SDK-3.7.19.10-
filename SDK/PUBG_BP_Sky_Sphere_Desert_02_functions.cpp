// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Sky_Sphere_Desert_02_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C.UpdateSunDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_Desert_02_C::UpdateSunDirection()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96203);

	ABP_Sky_Sphere_Desert_02_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_Desert_02_C::UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96183);

	ABP_Sky_Sphere_Desert_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
