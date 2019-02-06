#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Sessions_enums.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Sessions.CrewSessionTemplate
// 0x0040
struct FCrewSessionTemplate
{
	class FString                                      TemplateName;                                             // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      MatchmakingHopper;                                        // 0x0010(0x0010) (ZeroConstructor)
	TEnumAsByte<ECrewSessionType>                      SessionType;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UClass*                                      ShipSize;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxMatchmakingPlayers;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               SupportsMicrophonePresentFlag;                            // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
