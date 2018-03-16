// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GraphicOptionWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GraphicOptionWidget.GraphicOptionWidget_C.IsKeyUp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGraphicOptionWidget_C::IsKeyUp()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86862);

	UGraphicOptionWidget_C_IsKeyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GraphicOptionWidget.GraphicOptionWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGraphicOptionWidget_C::IsChanged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86854);

	UGraphicOptionWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GraphicOptionWidget.GraphicOptionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGraphicOptionWidget_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86853);

	UGraphicOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GraphicOptionWidget.GraphicOptionWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGraphicOptionWidget_C::OnApply()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86852);

	UGraphicOptionWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GraphicOptionWidget.GraphicOptionWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGraphicOptionWidget_C::OnDefault()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86851);

	UGraphicOptionWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GraphicOptionWidget.GraphicOptionWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGraphicOptionWidget_C::OnReset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86850);

	UGraphicOptionWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GraphicOptionWidget.GraphicOptionWidget_C.ExecuteUbergraph_GraphicOptionWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGraphicOptionWidget_C::ExecuteUbergraph_GraphicOptionWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(86848);

	UGraphicOptionWidget_C_ExecuteUbergraph_GraphicOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
