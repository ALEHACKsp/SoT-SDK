#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_IntentBasedContinuousUseReelMechanismAction_01a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IntentBasedContinuousUseReelMechanismAction_01a.BP_IntentBasedContinuousUseReelMechanismAction_01a_C
// 0x0018 (0x0AC8 - 0x0AB0)
class ABP_IntentBasedContinuousUseReelMechanismAction_01a_C : public AIntentBasedContinuousAnimatedMechanismAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIntentCombinerComponent*                    IntentCombiner;                                           // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_IntentBasedContinuousUseReelMechanismAction_01a.BP_IntentBasedContinuousUseReelMechanismAction_01a_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_IntentBasedContinuousUseReelMechanismAction_01a(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
