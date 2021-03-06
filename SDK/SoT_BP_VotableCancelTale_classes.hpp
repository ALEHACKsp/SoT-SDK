#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableCancelTale_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VotableCancelTale.BP_VotableCancelTale_C
// 0x0050 (0x05D8 - 0x0588)
class ABP_VotableCancelTale_C : public AVotableObjectView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Token_2;                                                  // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_4;                                                  // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_3;                                                  // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_1;                                                  // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                Tokens;                                                   // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 Token_Asset;                                              // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoteCount;                                                // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Show_Token_Animation_Time;                                // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Token_Material;                                           // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VotableCancelTale.BP_VotableCancelTale_C"));
		return ptr;
	}


	void PlayShowTokenAnimation(class UPrimitiveComponent* Token);
	void Is_Session_Locked(bool* IsLocked);
	struct FText GetObjectDisplayName();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter);
	void OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter);
	void ExecuteUbergraph_BP_VotableCancelTale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
