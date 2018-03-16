#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CharacterStudio_Default_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharacterStudio_Default.CharacterStudio_Default_C.UserConstructionScript
struct ACharacterStudio_Default_C_UserConstructionScript_Params
{
};

// Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveTick
struct ACharacterStudio_Default_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveDestroyed
struct ACharacterStudio_Default_C_ReceiveDestroyed_Params
{
};

// Function CharacterStudio_Default.CharacterStudio_Default_C.ExecuteUbergraph_CharacterStudio_Default
struct ACharacterStudio_Default_C_ExecuteUbergraph_CharacterStudio_Default_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
