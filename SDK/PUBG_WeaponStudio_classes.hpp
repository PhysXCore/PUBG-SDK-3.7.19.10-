#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeaponStudio_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponStudio.WeaponStudio_C
// 0x0088 (0x04A8 - 0x0420)
class AWeaponStudio_C : public AWeaponStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class UAsyncStaticMeshComponent*                   Stock;                                                    // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Magazine;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   UperRail;                                                 // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   LowerRail;                                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Muzzle;                                                   // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponMesh;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<EWeaponAttachmentSlotID, class UAsyncStaticMeshComponent*> AttachmentMaps;                                           // 0x0458(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(59947);
		return ptr;
	}


	void OnUpdateSkinBp();
	class UMeshComponent* GetWeaonMesh();
	void InitializeAttachmentMap();
	void OnAttachmentLoad();
	void OnUpdateAttachmentBp();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateWeaponMesh();
	void OnUpdateAttachment();
	void OnUpdateSkin();
	void ExecuteUbergraph_WeaponStudio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
