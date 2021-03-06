// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SpireFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpireFramework.SpireService.OnRep_SpireLevels
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FSpireInfo>      PreviousSpireLevels            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASpireService::OnRep_SpireLevels(TArray<struct FSpireInfo> PreviousSpireLevels)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SpireFramework.SpireService.OnRep_SpireLevels"));

	struct
	{
		TArray<struct FSpireInfo>      PreviousSpireLevels;
	} params;

	params.PreviousSpireLevels = PreviousSpireLevels;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
