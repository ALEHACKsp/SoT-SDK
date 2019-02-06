#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BuoyantStorageBarrel_LockedToWater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C
// 0x0020 (0x0710 - 0x06F0)
class ABP_BuoyantStorageBarrel_LockedToWater_C : public ABuoyantStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                         // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
