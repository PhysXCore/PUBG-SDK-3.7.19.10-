// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ListBaseGroupWidget_Gamepad_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.GetChilderenCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UListBaseGroupWidget_Gamepad_C::GetChilderenCount(int* Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63163);

	UListBaseGroupWidget_Gamepad_C_GetChilderenCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UListBaseGroupWidget_Gamepad_C::AddChild(class UWidget** Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63160);

	UListBaseGroupWidget_Gamepad_C_AddChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UListBaseGroupWidget_Gamepad_C::Clear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63159);

	UListBaseGroupWidget_Gamepad_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.On_List_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UListBaseGroupWidget_Gamepad_C::On_List_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63148);

	UListBaseGroupWidget_Gamepad_C_On_List_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddCategoryGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCategoryGroupWidget_Gamepad_C* CategoryGroup                  (Parm, ZeroConstructor, IsPlainOldData)

void UListBaseGroupWidget_Gamepad_C::AddCategoryGroup(class UCategoryGroupWidget_Gamepad_C* CategoryGroup)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63145);

	UListBaseGroupWidget_Gamepad_C_AddCategoryGroup_Params params;
	params.CategoryGroup = CategoryGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
