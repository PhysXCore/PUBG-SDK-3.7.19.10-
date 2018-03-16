// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TSLGameState_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSLGameState.TSLGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATSLGameState_C::UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72061);

	ATSLGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSLGameState.TSLGameState_C.UpdateWorldTimeSecondsDelta
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATSLGameState_C::UpdateWorldTimeSecondsDelta(float* DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72059);

	ATSLGameState_C_UpdateWorldTimeSecondsDelta_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSLGameState.TSLGameState_C.ExecuteUbergraph_TSLGameState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATSLGameState_C::ExecuteUbergraph_TSLGameState(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(72056);

	ATSLGameState_C_ExecuteUbergraph_TSLGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
