#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_cannonball_chain_shot_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C
// 0x0020 (0x0848 - 0x0828)
class ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C : public ABP_CannonBall_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0828(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              JiggleVelocityThreshold;                                  // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JiggleAmount;                                             // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JiggleVelocityScale;                                      // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_cmn_cannonball_chain_shot_01_a_Wieldable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
