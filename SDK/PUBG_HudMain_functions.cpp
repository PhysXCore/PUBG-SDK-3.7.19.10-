// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HudMain_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HudMain.HudMain_C.OnKey_EmoteWheelReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_EmoteWheelReleased()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59123);

	UHudMain_C_OnKey_EmoteWheelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_EmoteWheelPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_EmoteWheelPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59121);

	UHudMain_C_OnKey_EmoteWheelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnInit_Delegate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHudMain_C::OnInit_Delegate(class ATslBaseHUD** TslBaseHUD)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59114);

	UHudMain_C_OnInit_Delegate_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Replay
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHudMain_C::OnInit_Replay(class ATslBaseHUD** TslBaseHUD)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59111);

	UHudMain_C_OnInit_Replay_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Input
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHudMain_C::OnInit_Input(class ATslBaseHUD** TslBaseHUD)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59097);

	UHudMain_C_OnInit_Input_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Widget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHudMain_C::OnInit_Widget(class ATslBaseHUD** TslBaseHUD)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59086);

	UHudMain_C_OnInit_Widget_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UHudMain_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59077);

	UHudMain_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.SetObserverSpectatingUp
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::SetObserverSpectatingUp()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59076);

	UHudMain_C_SetObserverSpectatingUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetObserverSpectatingDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHudMain_C::SetObserverSpectatingDown()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59070);

	UHudMain_C_SetObserverSpectatingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShouldShowReplayMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::ShouldShowReplayMenu(bool* bShow)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59063);

	UHudMain_C_ShouldShowReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function HudMain.HudMain_C.BindEventForShowReplayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::BindEventForShowReplayTimeline()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59060);

	UHudMain_C_BindEventForShowReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShowReplayTimeLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::ShowReplayTimeLine(bool bShow)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59057);

	UHudMain_C_ShowReplayTimeLine_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetHUDForIngameReplayMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::SetHUDForIngameReplayMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59052);

	UHudMain_C_SetHUDForIngameReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.BindEventForMapClosing
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::BindEventForMapClosing()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59046);

	UHudMain_C_BindEventForMapClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_ReplayMenuOrEscape()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59039);

	UHudMain_C_OnKey_ReplayMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.InitForReplay
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::InitForReplay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59036);

	UHudMain_C_InitForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleOption
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnToggleOption()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59027);

	UHudMain_C_OnToggleOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.UpdateReplayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::UpdateReplayTimeline()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59018);

	UHudMain_C_UpdateReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleBattleList
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnToggleBattleList()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59003);

	UHudMain_C_OnToggleBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapHide
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnMapHide()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59001);

	UHudMain_C_OnMapHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapShow
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnMapShow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58990);

	UHudMain_C_OnMapShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_MapReleased()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58980);

	UHudMain_C_OnKey_MapReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_MapPressed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58972);

	UHudMain_C_OnKey_MapPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnShowCarePackageItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnShowCarePackageItemList()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58963);

	UHudMain_C_OnShowCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsShowMapOrInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsShow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::IsShowMapOrInventory(bool* bIsShow)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58955);

	UHudMain_C_IsShowMapOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsShow != nullptr)
		*bIsShow = params.bIsShow;
}


// Function HudMain.HudMain_C.OnTogglePlayerList
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnTogglePlayerList()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58944);

	UHudMain_C_OnTogglePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsCharacterAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAlive                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::IsCharacterAlive(bool* IsAlive)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58938);

	UHudMain_C_IsCharacterAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;
}


// Function HudMain.HudMain_C.OnNitifyHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamagePercent                  (Parm, ZeroConstructor, IsPlainOldData)
// EDamageTypeCategory            DamageTypeCategory             (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::OnNitifyHit(float DamagePercent, EDamageTypeCategory DamageTypeCategory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58934);

	UHudMain_C_OnNitifyHit_Params params;
	params.DamagePercent = DamagePercent;
	params.DamageTypeCategory = DamageTypeCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnKey_SystemMenuOrEscape()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58927);

	UHudMain_C_OnKey_SystemMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleMap
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnToggleMap()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58917);

	UHudMain_C_OnToggleMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnPossessPawnChange
// (Public, BlueprintCallable, BlueprintEvent)

void UHudMain_C::OnPossessPawnChange()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58916);

	UHudMain_C_OnPossessPawnChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CreateCheckReplayTimer
// (BlueprintCallable, BlueprintEvent)

void UHudMain_C::CreateCheckReplayTimer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58915);

	UHudMain_C_CreateCheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CheckReplayTimer
// (BlueprintCallable, BlueprintEvent)

void UHudMain_C::CheckReplayTimer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58914);

	UHudMain_C_CheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.HideMapForReplay
// (BlueprintCallable, BlueprintEvent)

void UHudMain_C::HideMapForReplay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58913);

	UHudMain_C_HideMapForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudMain_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58912);

	UHudMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ExecuteUbergraph_HudMain
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHudMain_C::ExecuteUbergraph_HudMain(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58896);

	UHudMain_C_ExecuteUbergraph_HudMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHudMain_C::ButtonClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58895);

	UHudMain_C_ButtonClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
