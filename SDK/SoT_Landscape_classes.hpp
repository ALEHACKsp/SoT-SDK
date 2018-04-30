#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Landscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x06F0 - 0x06F0)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0030 (0x0058 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0038(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0040(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0050(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0051(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}

};


// Class Landscape.LandscapeComponent
// 0x0170 (0x07E0 - 0x0670)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x0670(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0674(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0678(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x067C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   MaterialInstance;                                         // 0x0698(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x06A0(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x06B0(0x0010) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x06C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06C8(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x06D0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x06E4(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x06F0(0x0010) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0700(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0708(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x0724(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0740(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0750(0x0010) MISSED OFFSET
	int                                                CollisionMipLevel;                                        // 0x0760(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0764(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0768(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x076C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x0770(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x0780(0x0010) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0790(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0798(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0799(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x07A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x07A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x30];                                      // 0x07B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0470 - 0x0470)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x04C0 - 0x0470)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0470(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0670 - 0x0670)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0750 - 0x0670)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                      // 0x0670(0x0010) (ZeroConstructor)
	int                                                SectionBaseX;                                             // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0684(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0688(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x068C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0690(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x06A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x06B0(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x06CC(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06E8(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x06F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0708(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x0760 - 0x0750)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0750(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01E8 (0x0210 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A4];                                     // 0x006C(0x01A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0050 (0x0078 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0018 (0x0040 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0010 (0x0200 - 0x01F0)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01F0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F1(0x0003) MISSED OFFSET
	int                                                DataWeightmapIndex;                                       // 0x01F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DataWeightmapSize;                                        // 0x01F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0478 - 0x0470)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0720 - 0x06F0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x06F0(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0700(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0710(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0711(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x03A0 (0x0810 - 0x0470)
class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0480(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x04A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x04C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x04C8(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x04D8(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x04E8(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData03[0x78];                                      // 0x04F8(0x0078) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0570(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0574(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0590(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0590(0x0001) (Edit)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0590(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x0590(0x0001) (Edit)
	unsigned char                                      bIsProxy : 1;                                             // 0x0590(0x0001)
	unsigned char                                      bUseFarCascadeLPVBiasMultiplier : 1;                      // 0x0590(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0591(0x0003) MISSED OFFSET
	float                                              LpvIntensityMultiplier;                                   // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LpvBiasMultiplier;                                        // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FarCascadeLPVBiasMultiplier;                              // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x05A0(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x05B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x05BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               BodyInstance;                                             // 0x05C0(0x0190) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                ComponentSizeQuads;                                       // 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0754(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x075C(0x0001) (Edit)
	unsigned char                                      bReflected : 1;                                           // 0x075C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	TEnumAsByte<ENavDataGatheringMode>                 NavigationGeometryGatheringMode;                          // 0x0760(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0761(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xAE];                                      // 0x0762(0x00AE) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.Landscape
// 0x0000 (0x0810 - 0x0810)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x06A0 - 0x0670)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                            // 0x0670(0x0010) (ZeroConstructor)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0680(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0690(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0070(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0070(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0088 - 0x0070)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x007C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x0100 - 0x0070)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0070(0x0038) (ZeroConstructor)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x00A8(0x0038) (ZeroConstructor)
	struct FName                                       ParameterName;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00E8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00EC(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x0108 - 0x0070)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0070(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Layer;                                                    // 0x00A8(0x0038) (ZeroConstructor)
	struct FName                                       ParameterName;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00EC(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00F8(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
