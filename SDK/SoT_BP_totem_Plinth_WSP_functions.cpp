// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_totem_Plinth_WSP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_totem_Plinth_WSP.BP_totem_Plinth_WSP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_totem_Plinth_WSP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_totem_Plinth_WSP.BP_totem_Plinth_WSP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
