// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SoundOptionWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SoundOptionWidget.SoundOptionWidget_C.IsEnable_VoiceSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoundOptionWidget_C::IsEnable_VoiceSetting()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86077);

	USoundOptionWidget_C_IsEnable_VoiceSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundOptionWidget.SoundOptionWidget_C.IsKeyUp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoundOptionWidget_C::IsKeyUp()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86075);

	USoundOptionWidget_C_IsKeyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundOptionWidget.SoundOptionWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoundOptionWidget_C::IsChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86070);

	USoundOptionWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundOptionWidget.SoundOptionWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USoundOptionWidget_C::OnApply()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86069);

	USoundOptionWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundOptionWidget.SoundOptionWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USoundOptionWidget_C::OnDefault()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86068);

	USoundOptionWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundOptionWidget.SoundOptionWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USoundOptionWidget_C::OnReset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86067);

	USoundOptionWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundOptionWidget.SoundOptionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USoundOptionWidget_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86066);

	USoundOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoundOptionWidget.SoundOptionWidget_C.ExecuteUbergraph_SoundOptionWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USoundOptionWidget_C::ExecuteUbergraph_SoundOptionWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86063);

	USoundOptionWidget_C_ExecuteUbergraph_SoundOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
