// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CharacterStateCanvasWidget_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineDown
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterStateCanvasWidget_C::CharacterStateReplayTimelineDown()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72164);

	UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineUp
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterStateCanvasWidget_C::CharacterStateReplayTimelineUp()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72159);

	UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterStateCanvasWidget_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72158);

	UCharacterStateCanvasWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.ExecuteUbergraph_CharacterStateCanvasWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterStateCanvasWidget_C::ExecuteUbergraph_CharacterStateCanvasWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72142);

	UCharacterStateCanvasWidget_C_ExecuteUbergraph_CharacterStateCanvasWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
