// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OptionButton_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionButton.OptionButton_C.SetButtonBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InBackgroundColor              (Parm, IsPlainOldData)

void UOptionButton_C::SetButtonBgColor(const struct FLinearColor& InBackgroundColor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85836);

	UOptionButton_C_SetButtonBgColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionButton.OptionButton_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOptionButton_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85834);

	UOptionButton_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionButton.OptionButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85833);

	UOptionButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionButton.OptionButton_C.ExecuteUbergraph_OptionButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionButton_C::ExecuteUbergraph_OptionButton(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85831);

	UOptionButton_C_ExecuteUbergraph_OptionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionButton.OptionButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(85830);

	UOptionButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
