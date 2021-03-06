// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_VoiceSettingWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelByOption
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           GlobalChannel                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TeamChannel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVoiceSettingWidget_C::GetVoiceChannelByOption(bool* GlobalChannel, bool* TeamChannel)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86152);

	UVoiceSettingWidget_C_GetVoiceChannelByOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalChannel != nullptr)
		*GlobalChannel = params.GlobalChannel;
	if (TeamChannel != nullptr)
		*TeamChannel = params.TeamChannel;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceByOption
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsMuted                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePushToTalk                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVoiceSettingWidget_C::GetMyVoiceByOption(bool* bIsMuted, bool* bUsePushToTalk)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86146);

	UVoiceSettingWidget_C_GetMyVoiceByOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsMuted != nullptr)
		*bIsMuted = params.bIsMuted;
	if (bUsePushToTalk != nullptr)
		*bUsePushToTalk = params.bUsePushToTalk;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelOptionString
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 OptionString                   (Parm, OutParm, ZeroConstructor)

void UVoiceSettingWidget_C::GetVoiceChannelOptionString(struct FString* OptionString)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86142);

	UVoiceSettingWidget_C_GetVoiceChannelOptionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceOptionString
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 OptionString                   (Parm, OutParm, ZeroConstructor)

void UVoiceSettingWidget_C::GetMyVoiceOptionString(struct FString* OptionString)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86136);

	UVoiceSettingWidget_C_GetMyVoiceOptionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVoiceSettingWidget_C::IsChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86117);

	UVoiceSettingWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.UpdateVoiceSettingWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::UpdateVoiceSettingWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86110);

	UVoiceSettingWidget_C_UpdateVoiceSettingWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoiceSettingWidget_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86109);

	UVoiceSettingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnApply()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86108);

	UVoiceSettingWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnDefault()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86107);

	UVoiceSettingWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnReset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86106);

	UVoiceSettingWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.ExecuteUbergraph_VoiceSettingWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVoiceSettingWidget_C::ExecuteUbergraph_VoiceSettingWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86096);

	UVoiceSettingWidget_C_ExecuteUbergraph_VoiceSettingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
