#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseLockableCollectorsChest_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C
// 0x0020 (0x09B1 - 0x0991)
class ABP_BaseLockableCollectorsChest_Proxy_C : public ABP_CollectorsChest_Proxy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             LockSocketsRoot;                                          // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULockComponent*                              Lock;                                                     // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Open_After_Unlock;                                        // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature();
	void ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
