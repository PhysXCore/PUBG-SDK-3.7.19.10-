// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeaponEquipmentWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.IsFocusable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::IsFocusable()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61764);

	UWeaponEquipmentWidget_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.Down
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::Down()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61741);

	UWeaponEquipmentWidget_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetDownWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UWeaponEquipmentWidget_C::GetDownWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61739);

	UWeaponEquipmentWidget_C_GetDownWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetFocusingChildWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UWeaponEquipmentWidget_C::GetFocusingChildWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61736);

	UWeaponEquipmentWidget_C_GetFocusingChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetLeftWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UWeaponEquipmentWidget_C::GetLeftWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61734);

	UWeaponEquipmentWidget_C_GetLeftWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetRightWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UWeaponEquipmentWidget_C::GetRightWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61732);

	UWeaponEquipmentWidget_C_GetRightWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetUpWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UWeaponEquipmentWidget_C::GetUpWidget()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61730);

	UWeaponEquipmentWidget_C_GetUpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InputA
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::InputA()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61723);

	UWeaponEquipmentWidget_C_InputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InputB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::InputB()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61716);

	UWeaponEquipmentWidget_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InputLB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::InputLB()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61714);

	UWeaponEquipmentWidget_C_InputLB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InputLT
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::InputLT()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61712);

	UWeaponEquipmentWidget_C_InputLT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InputRB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::InputRB()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61710);

	UWeaponEquipmentWidget_C_InputRB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InputRT
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::InputRT()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61708);

	UWeaponEquipmentWidget_C_InputRT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InputX
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::InputX()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61706);

	UWeaponEquipmentWidget_C_InputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InputY
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::InputY()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61704);

	UWeaponEquipmentWidget_C_InputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::IsFocus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61702);

	UWeaponEquipmentWidget_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.Left
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::Left()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61683);

	UWeaponEquipmentWidget_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.Right
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::Right()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61664);

	UWeaponEquipmentWidget_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::SetFocus(bool NewFocus)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61649);

	UWeaponEquipmentWidget_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.Up
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::Up()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61629);

	UWeaponEquipmentWidget_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.SelfUpAttachmentIndexUp
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentWidget_C::SelfUpAttachmentIndexUp()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61615);

	UWeaponEquipmentWidget_C_SelfUpAttachmentIndexUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.PutAttachment
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentWidget_C::PutAttachment()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61602);

	UWeaponEquipmentWidget_C_PutAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.StopSelftattachmentPut
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentWidget_C::StopSelftattachmentPut()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61595);

	UWeaponEquipmentWidget_C_StopSelftattachmentPut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.StartSelfAttachmentPut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::StartSelfAttachmentPut(bool* bResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61581);

	UWeaponEquipmentWidget_C_StartSelfAttachmentPut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.OnChildSlotRefreshFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentWidget_C::OnChildSlotRefreshFocus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61563);

	UWeaponEquipmentWidget_C_OnChildSlotRefreshFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.FindFirtFocusableWidgetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::FindFirtFocusableWidgetIndex(int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61554);

	UWeaponEquipmentWidget_C_FindFirtFocusableWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetFocusableDownChildIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::GetFocusableDownChildIndex(int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61542);

	UWeaponEquipmentWidget_C_GetFocusableDownChildIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetFocusableUpChildIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::GetFocusableUpChildIndex(int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61527);

	UWeaponEquipmentWidget_C_GetFocusableUpChildIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetFocusableRightChildIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::GetFocusableRightChildIndex(int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61522);

	UWeaponEquipmentWidget_C_GetFocusableRightChildIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetFocusableLeftChildIdnex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::GetFocusableLeftChildIdnex(int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61517);

	UWeaponEquipmentWidget_C_GetFocusableLeftChildIdnex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEquipment*              Equipment                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::GetEquipment(class AEquipment** Equipment)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61511);

	UWeaponEquipmentWidget_C_GetEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Equipment != nullptr)
		*Equipment = params.Equipment;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.MainPrepass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::MainPrepass(class UWidget* BoundWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61499);

	UWeaponEquipmentWidget_C_MainPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.InitializeWeaponEquipment
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentWidget_C::InitializeWeaponEquipment()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61490);

	UWeaponEquipmentWidget_C_InitializeWeaponEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentWidget_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61473);

	UWeaponEquipmentWidget_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.GetWeaponItemByTabIndex
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWeaponItem*             WeaponItem                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::GetWeaponItemByTabIndex(int Index, class UWeaponItem** WeaponItem)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61463);

	UWeaponEquipmentWidget_C_GetWeaponItemByTabIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponItem != nullptr)
		*WeaponItem = params.WeaponItem;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponEquipmentWidget_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61462);

	UWeaponEquipmentWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61458);

	UWeaponEquipmentWidget_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61455);

	UWeaponEquipmentWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61452);

	UWeaponEquipmentWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.SetInventoryWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_C**     Inventory                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::SetInventoryWidget(class UInventoryWidget_C** Inventory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61450);

	UWeaponEquipmentWidget_C_SetInventoryWidget_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.BndEvt__Weapon_01_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentWidget_C::BndEvt__Weapon_01_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61449);

	UWeaponEquipmentWidget_C_BndEvt__Weapon_01_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.BndEvt__Weapon_02_K2Node_ComponentBoundEvent_75_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentWidget_C::BndEvt__Weapon_02_K2Node_ComponentBoundEvent_75_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61448);

	UWeaponEquipmentWidget_C_BndEvt__Weapon_02_K2Node_ComponentBoundEvent_75_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.BndEvt__Weapon_03_K2Node_ComponentBoundEvent_90_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentWidget_C::BndEvt__Weapon_03_K2Node_ComponentBoundEvent_90_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61447);

	UWeaponEquipmentWidget_C_BndEvt__Weapon_03_K2Node_ComponentBoundEvent_90_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.BndEvt__Weapon_04_K2Node_ComponentBoundEvent_106_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentWidget_C::BndEvt__Weapon_04_K2Node_ComponentBoundEvent_106_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61446);

	UWeaponEquipmentWidget_C_BndEvt__Weapon_04_K2Node_ComponentBoundEvent_106_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.BndEvt__Weapon_05_K2Node_ComponentBoundEvent_123_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentWidget_C::BndEvt__Weapon_05_K2Node_ComponentBoundEvent_123_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61445);

	UWeaponEquipmentWidget_C_BndEvt__Weapon_05_K2Node_ComponentBoundEvent_123_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.OnWidgetMoveUp
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentWidget_C::OnWidgetMoveUp()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61444);

	UWeaponEquipmentWidget_C_OnWidgetMoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.OnWidgetMoveDown
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentWidget_C::OnWidgetMoveDown()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61443);

	UWeaponEquipmentWidget_C_OnWidgetMoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.ExecuteUbergraph_WeaponEquipmentWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::ExecuteUbergraph_WeaponEquipmentWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61402);

	UWeaponEquipmentWidget_C_ExecuteUbergraph_WeaponEquipmentWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentWidget.WeaponEquipmentWidget_C.OnInventoryDrop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentWidget_C::OnInventoryDrop__DelegateSignature(class UDragDropOperation* Operation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(61400);

	UWeaponEquipmentWidget_C_OnInventoryDrop__DelegateSignature_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
