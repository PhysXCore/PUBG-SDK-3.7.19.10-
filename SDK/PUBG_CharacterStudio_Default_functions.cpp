// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CharacterStudio_Default_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterStudio_Default.CharacterStudio_Default_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacterStudio_Default_C::UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59860);

	ACharacterStudio_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ACharacterStudio_Default_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59858);

	ACharacterStudio_Default_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ACharacterStudio_Default_C::ReceiveDestroyed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59857);

	ACharacterStudio_Default_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStudio_Default.CharacterStudio_Default_C.ExecuteUbergraph_CharacterStudio_Default
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACharacterStudio_Default_C::ExecuteUbergraph_CharacterStudio_Default(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(59854);

	ACharacterStudio_Default_C_ExecuteUbergraph_CharacterStudio_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
