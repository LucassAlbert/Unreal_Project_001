// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingPlatform.h"

#ifdef OBSTACLEASSAULT_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define OBSTACLEASSAULT_MovingPlatform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AMovingPlatform **********************************************************
#define FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();

#define FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister(); \
public: \
	DECLARE_CLASS2(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleAssault"), Z_Construct_UClass_AMovingPlatform_NoRegister) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMovingPlatform(AMovingPlatform&&) = delete; \
	AMovingPlatform(const AMovingPlatform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform) \
	NO_API virtual ~AMovingPlatform();


#define FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_10_PROLOG
#define FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_13_INCLASS_NO_PURE_DECLS \
	FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMovingPlatform;

// ********** End Class AMovingPlatform ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
