// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SelfPutHelperWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFromWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFromWeapon()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64362);

	USelfPutHelperWidget_C_SwapFromWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormEquipment
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFormEquipment()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64361);

	USelfPutHelperWidget_C_SwapFormEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormVicnityOrInventory
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::SwapFormVicnityOrInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64360);

	USelfPutHelperWidget_C_SwapFormVicnityOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.IsSelfPutMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsSelfPutMode                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::IsSelfPutMode(bool* bIsSelfPutMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64358);

	USelfPutHelperWidget_C_IsSelfPutMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSelfPutMode != nullptr)
		*bIsSelfPutMode = params.bIsSelfPutMode;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.GetFocusData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    EnableWeaponIndex              (Parm, OutParm, ZeroConstructor)
// EWeaponAttachmentSlotID        AttachmentSlotID               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::GetFocusData(int* Index, TArray<int>* EnableWeaponIndex, EWeaponAttachmentSlotID* AttachmentSlotID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64352);

	USelfPutHelperWidget_C_GetFocusData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (EnableWeaponIndex != nullptr)
		*EnableWeaponIndex = params.EnableWeaponIndex;
	if (AttachmentSlotID != nullptr)
		*AttachmentSlotID = params.AttachmentSlotID;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.NextWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::NextWeapon()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64348);

	USelfPutHelperWidget_C_NextWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.PrevWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::PrevWeapon()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64344);

	USelfPutHelperWidget_C_PrevWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Put
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::Put()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64313);

	USelfPutHelperWidget_C_Put_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void USelfPutHelperWidget_C::Stop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64312);

	USelfPutHelperWidget_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.StartSelfPutItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> Container                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StartWeaponIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::StartSelfPutItem(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& Container, bool* bResult, int* StartWeaponIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64301);

	USelfPutHelperWidget_C_StartSelfPutItem_Params params;
	params.Slot = Slot;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (StartWeaponIndex != nullptr)
		*StartWeaponIndex = params.StartWeaponIndex;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStart                         (Parm, ZeroConstructor, IsPlainOldData)

void USelfPutHelperWidget_C::OnNotifySelfPut__DelegateSignature(bool bStart)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64299);

	USelfPutHelperWidget_C_OnNotifySelfPut__DelegateSignature_Params params;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
