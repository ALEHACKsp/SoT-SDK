// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_beach_rocks_11_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_beach_rocks_11.wsp_beach_rocks_10_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_beach_rocks_10_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_beach_rocks_11.wsp_beach_rocks_10_C.UserConstructionScript");

	Awsp_beach_rocks_10_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
