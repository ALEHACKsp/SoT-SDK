#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo.BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo_C
// 0x0008 (0x04C0 - 0x04B8)
class ABP_msc_hurdygurdy_elb_01_a_v02_ItemInfo_C : public AItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo.BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
