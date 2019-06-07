// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEpicLeaderboardObject;
 
#ifdef EPICLEADERBOARD_EpicLeaderboardObject_generated_h
#error "EpicLeaderboardObject.generated.h already included, missing '#pragma once' in EpicLeaderboardObject.h"
#endif
#define EPICLEADERBOARD_EpicLeaderboardObject_generated_h

#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_11_GENERATED_BODY \
	friend EPICLEADERBOARD_API class UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry(); \
	EPICLEADERBOARD_API static class UScriptStruct* StaticStruct();


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_33_DELEGATE \
struct _Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms \
{ \
	UEpicLeaderboardObject* Leaderboard; \
}; \
static inline void FEpicLeaderboardResponse_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardResponse, UEpicLeaderboardObject* Leaderboard) \
{ \
	_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms Parms; \
	Parms.Leaderboard=Leaderboard; \
	EpicLeaderboardResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEpicLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEpicLeaderboardObject**)Z_Param__Result=UEpicLeaderboardObject::GetEpicLeaderboard(Z_Param_LeaderboardID,Z_Param_LeaderboardKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubmitEntryWithMetadata) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayerScore); \
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Metadata); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubmitEntryWithMetadata(Z_Param_PlayerName,Z_Param_PlayerScore,Z_Param_Out_Metadata); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubmitEntry) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayerScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubmitEntry(Z_Param_PlayerName,Z_Param_PlayerScore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeaderboardEntries) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_UBOOL(Z_Param_AroundPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLeaderboardEntries(Z_Param_PlayerName,Z_Param_AroundPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanupName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEpicLeaderboardObject::CleanupName(Z_Param_name); \
		P_NATIVE_END; \
	}


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEpicLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEpicLeaderboardObject**)Z_Param__Result=UEpicLeaderboardObject::GetEpicLeaderboard(Z_Param_LeaderboardID,Z_Param_LeaderboardKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubmitEntryWithMetadata) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayerScore); \
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Metadata); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubmitEntryWithMetadata(Z_Param_PlayerName,Z_Param_PlayerScore,Z_Param_Out_Metadata); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubmitEntry) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayerScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubmitEntry(Z_Param_PlayerName,Z_Param_PlayerScore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeaderboardEntries) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_UBOOL(Z_Param_AroundPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLeaderboardEntries(Z_Param_PlayerName,Z_Param_AroundPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanupName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEpicLeaderboardObject::CleanupName(Z_Param_name); \
		P_NATIVE_END; \
	}


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEpicLeaderboardObject(); \
	friend EPICLEADERBOARD_API class UClass* Z_Construct_UClass_UEpicLeaderboardObject(); \
public: \
	DECLARE_CLASS(UEpicLeaderboardObject, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EpicLeaderboard"), NO_API) \
	DECLARE_SERIALIZER(UEpicLeaderboardObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUEpicLeaderboardObject(); \
	friend EPICLEADERBOARD_API class UClass* Z_Construct_UClass_UEpicLeaderboardObject(); \
public: \
	DECLARE_CLASS(UEpicLeaderboardObject, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EpicLeaderboard"), NO_API) \
	DECLARE_SERIALIZER(UEpicLeaderboardObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEpicLeaderboardObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEpicLeaderboardObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicLeaderboardObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicLeaderboardObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicLeaderboardObject(UEpicLeaderboardObject&&); \
	NO_API UEpicLeaderboardObject(const UEpicLeaderboardObject&); \
public:


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicLeaderboardObject(UEpicLeaderboardObject&&); \
	NO_API UEpicLeaderboardObject(const UEpicLeaderboardObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicLeaderboardObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicLeaderboardObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEpicLeaderboardObject)


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_PRIVATE_PROPERTY_OFFSET
#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_35_PROLOG
#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_PRIVATE_PROPERTY_OFFSET \
	Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_RPC_WRAPPERS \
	Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_INCLASS \
	Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_PRIVATE_PROPERTY_OFFSET \
	Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_INCLASS_NO_PURE_DECLS \
	Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype3_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
