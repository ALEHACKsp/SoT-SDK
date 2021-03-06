#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FeatureIslandCrate_cmn_wooden_crate_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FeatureIslandCrate_cmn_wooden_crate_01_a.BP_FeatureIslandCrate_cmn_wooden_crate_01_a_C
// 0x0018 (0x0510 - 0x04F8)
class ABP_FeatureIslandCrate_cmn_wooden_crate_01_a_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIslandTelemetrySubjectComponent*            IslandTelemetrySubject;                                   // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FeatureIslandCrate_cmn_wooden_crate_01_a.BP_FeatureIslandCrate_cmn_wooden_crate_01_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
