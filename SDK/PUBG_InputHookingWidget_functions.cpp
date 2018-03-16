// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InputHookingWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InputHookingWidget.InputHookingWidget_C.OnInputAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UInputHookingWidget_C::OnInputAxis(float Scale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70329);

	UInputHookingWidget_C_OnInputAxis_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputHookingWidget.InputHookingWidget_C.OnInputAction
// (Public, BlueprintCallable, BlueprintEvent)

void UInputHookingWidget_C::OnInputAction()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(70328);

	UInputHookingWidget_C_OnInputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
