// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_sea_rock_cluster_e_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_sea_rock_cluster_e.wld_sea_rock_cluster_e_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_sea_rock_cluster_e_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wld_sea_rock_cluster_e.wld_sea_rock_cluster_e_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
