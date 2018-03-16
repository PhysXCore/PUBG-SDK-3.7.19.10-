// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslLobby_cus_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslLobby_cus.TslLobby_cus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATslLobby_cus_C::ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(98071);

	ATslLobby_cus_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslLobby_cus.TslLobby_cus_C.ExecuteUbergraph_TslLobby_cus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATslLobby_cus_C::ExecuteUbergraph_TslLobby_cus(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(98069);

	ATslLobby_cus_C_ExecuteUbergraph_TslLobby_cus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
