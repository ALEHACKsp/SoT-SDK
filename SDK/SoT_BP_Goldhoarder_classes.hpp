#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Goldhoarder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Goldhoarder.BP_Goldhoarder_C
// 0x0028 (0x0668 - 0x0640)
class ABP_Goldhoarder_C : public ACompanyShopkeeper
{
public:
	class UEmissaryMaxRankQuestProvider*               EmissaryMaxRankQuestProvider;                             // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Goldhoarder.BP_Goldhoarder_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
