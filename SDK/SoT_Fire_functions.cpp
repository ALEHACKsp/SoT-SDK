// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Fire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fire.FlammableComponent.OnRep_OnFire
// (Final, Native, Protected)

void UFlammableComponent::OnRep_OnFire()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableComponent.OnRep_OnFire"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector                 InExtinguishLocationWS         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UFlammableComponent::Multicast_NotifyExtinguished_RPC(const struct FVector& InExtinguishLocationWS)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC"));

	struct
	{
		struct FVector                 InExtinguishLocationWS;
	} params;

	params.InExtinguishLocationWS = InExtinguishLocationWS;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.FirePropagationInterface.SetAllCellsOnFire
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOnFire                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFirePropagationInterface::SetAllCellsOnFire(bool IsOnFire)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.FirePropagationInterface.SetAllCellsOnFire"));

	struct
	{
		bool                           IsOnFire;
	} params;

	params.IsOnFire = IsOnFire;

	UObject::ProcessEvent(fn, &params);
}


// Function Fire.ShipFirePropagationComponent.OnRep_CellData
// (Final, Native, Private)

void UShipFirePropagationComponent::OnRep_CellData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Fire.ShipFirePropagationComponent.OnRep_CellData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
