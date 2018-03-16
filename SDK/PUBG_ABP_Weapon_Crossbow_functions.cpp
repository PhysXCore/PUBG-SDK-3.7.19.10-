// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Crossbow_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_Crossbow_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(53469);

	UABP_Weapon_Crossbow_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Crossbow_C::Reload2_Event_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(53468);

	UABP_Weapon_Crossbow_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Crossbow_C::WeaponFire_Event_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(53467);

	UABP_Weapon_Crossbow_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Crossbow_C::CancelReload_Event_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(53466);

	UABP_Weapon_Crossbow_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.ExecuteUbergraph_ABP_Weapon_Crossbow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Crossbow_C::ExecuteUbergraph_ABP_Weapon_Crossbow(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(53455);

	UABP_Weapon_Crossbow_C_ExecuteUbergraph_ABP_Weapon_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
