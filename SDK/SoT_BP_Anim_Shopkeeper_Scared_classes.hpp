#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Shopkeeper_Scared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Shopkeeper_Scared.BP_Anim_Shopkeeper_Scared_C
// 0x0000 (0x14AD - 0x14AD)
class UBP_Anim_Shopkeeper_Scared_C : public UBP_Anim_NPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass BP_Anim_Shopkeeper_Scared.BP_Anim_Shopkeeper_Scared_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif