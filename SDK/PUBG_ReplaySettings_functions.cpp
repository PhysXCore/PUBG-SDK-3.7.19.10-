// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplaySettings_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplaySettings.ReplaySettings_C.Get_KillcamComboBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UReplaySettings_C::Get_KillcamComboBox_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(89145);

	UReplaySettings_C_Get_KillcamComboBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.Get_ReplayComboBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UReplaySettings_C::Get_ReplayComboBox_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86837);

	UReplaySettings_C_Get_ReplayComboBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.Get_ReplayOption_Editable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplaySettings_C::Get_ReplayOption_Editable()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86834);

	UReplaySettings_C_Get_ReplayOption_Editable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.ApplybyCurrentSelectedSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::ApplybyCurrentSelectedSettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86823);

	UReplaySettings_C_ApplybyCurrentSelectedSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.InitReplaySettings
// (Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::InitReplaySettings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86810);

	UReplaySettings_C_InitReplaySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplaySettings_C::IsChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86796);

	UReplaySettings_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplaySettings_C::IsEnableApply()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86793);

	UReplaySettings_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.SetToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::SetToDefault()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86777);

	UReplaySettings_C_SetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::OnDefault()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86776);

	UReplaySettings_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplaySettings_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86775);

	UReplaySettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::OnApply()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86774);

	UReplaySettings_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.ExecuteUbergraph_ReplaySettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplaySettings_C::ExecuteUbergraph_ReplaySettings(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86772);

	UReplaySettings_C_ExecuteUbergraph_ReplaySettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
