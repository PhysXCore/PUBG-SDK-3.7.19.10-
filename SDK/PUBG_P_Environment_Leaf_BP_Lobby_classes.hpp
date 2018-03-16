#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Environment_Leaf_BP_Lobby_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Environment_Leaf_BP_Lobby.P_Environment_Leaf_BP_Lobby_C
// 0x0060 (0x0490 - 0x0430)
class AP_Environment_Leaf_BP_Lobby_C : public ATslParticleEnvironment
{
public:
	struct FVector                                     SpawnBoxMax;                                              // 0x0430(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnBoxMin;                                              // 0x043C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Color;                                                    // 0x0448(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SizeMax;                                                  // 0x0458(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SizeMin;                                                  // 0x0464(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VelocityMax;                                              // 0x0470(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VelocityMin;                                              // 0x047C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTimeLow;                                              // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(96269);
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
