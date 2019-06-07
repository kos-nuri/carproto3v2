// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EpicLeaderboardObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicLeaderboardObject() {}
// Cross Module References
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EpicLeaderboard();
	EPICLEADERBOARD_API UClass* Z_Construct_UClass_UEpicLeaderboardObject_NoRegister();
	EPICLEADERBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry();
	EPICLEADERBOARD_API UClass* Z_Construct_UClass_UEpicLeaderboardObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature()
	{
		struct _Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms
		{
			UEpicLeaderboardObject* Leaderboard;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Leaderboard = { UE4CodeGen_Private::EPropertyClass::Object, "Leaderboard", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms, Leaderboard), Z_Construct_UClass_UEpicLeaderboardObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Leaderboard,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, "EpicLeaderboardResponse__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FEpicLeaderboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICLEADERBOARD_API uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicLeaderboardEntry, Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("EpicLeaderboardEntry"), sizeof(FEpicLeaderboardEntry), Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEpicLeaderboardEntry(FEpicLeaderboardEntry::StaticStruct, TEXT("/Script/EpicLeaderboard"), TEXT("EpicLeaderboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry
{
	FScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EpicLeaderboardEntry")),new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>);
	}
} ScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicLeaderboard();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EpicLeaderboardEntry"), sizeof(FEpicLeaderboardEntry), Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_meta = { UE4CodeGen_Private::EPropertyClass::Str, "meta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, meta), METADATA_PARAMS(NewProp_meta_MetaData, ARRAY_COUNT(NewProp_meta_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
				{ "Category", "EpicLeaderboardEntry" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Metadata = { UE4CodeGen_Private::EPropertyClass::Map, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, Metadata), METADATA_PARAMS(NewProp_Metadata_MetaData, ARRAY_COUNT(NewProp_Metadata_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Metadata_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_country_MetaData[] = {
				{ "Category", "EpicLeaderboardEntry" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_country = { UE4CodeGen_Private::EPropertyClass::Str, "country", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, country), METADATA_PARAMS(NewProp_country_MetaData, ARRAY_COUNT(NewProp_country_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[] = {
				{ "Category", "EpicLeaderboardEntry" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_score = { UE4CodeGen_Private::EPropertyClass::Str, "score", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, score), METADATA_PARAMS(NewProp_score_MetaData, ARRAY_COUNT(NewProp_score_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[] = {
				{ "Category", "EpicLeaderboardEntry" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_username = { UE4CodeGen_Private::EPropertyClass::Str, "username", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, username), METADATA_PARAMS(NewProp_username_MetaData, ARRAY_COUNT(NewProp_username_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[] = {
				{ "Category", "EpicLeaderboardEntry" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_rank = { UE4CodeGen_Private::EPropertyClass::Int, "rank", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, rank), METADATA_PARAMS(NewProp_rank_MetaData, ARRAY_COUNT(NewProp_rank_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_meta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metadata,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metadata_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metadata_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_country,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_score,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_username,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rank,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EpicLeaderboardEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEpicLeaderboardEntry),
				alignof(FEpicLeaderboardEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC() { return 1169169530U; }
	void UEpicLeaderboardObject::StaticRegisterNativesUEpicLeaderboardObject()
	{
		UClass* Class = UEpicLeaderboardObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanupName", &UEpicLeaderboardObject::execCleanupName },
			{ "GetEpicLeaderboard", &UEpicLeaderboardObject::execGetEpicLeaderboard },
			{ "GetLeaderboardEntries", &UEpicLeaderboardObject::execGetLeaderboardEntries },
			{ "SubmitEntry", &UEpicLeaderboardObject::execSubmitEntry },
			{ "SubmitEntryWithMetadata", &UEpicLeaderboardObject::execSubmitEntryWithMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName()
	{
		struct EpicLeaderboardObject_eventCleanupName_Parms
		{
			FString name;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventCleanupName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventCleanupName_Parms, name), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EpicLeaderboard|Utilities" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
				{ "ToolTip", "Utilities" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "CleanupName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EpicLeaderboardObject_eventCleanupName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard()
	{
		struct EpicLeaderboardObject_eventGetEpicLeaderboard_Parms
		{
			FString LeaderboardID;
			FString LeaderboardKey;
			UEpicLeaderboardObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UEpicLeaderboardObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardKey = { UE4CodeGen_Private::EPropertyClass::Str, "LeaderboardKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, LeaderboardKey), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardID = { UE4CodeGen_Private::EPropertyClass::Str, "LeaderboardID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, LeaderboardID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaderboardKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaderboardID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EpicLeaderboard|Leaderboard" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
				{ "ToolTip", "Return the leaderboard for this ID\n@param LeaderboardID - The LeaderboardID from http://EpicLeaderboard.com.\n@param LeaderboardKey - The LeaderboardKey from http://EpicLeaderboard.com.\n@return The EpicLeaderboardObject for this LeaderboardID." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "GetEpicLeaderboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries()
	{
		struct EpicLeaderboardObject_eventGetLeaderboardEntries_Parms
		{
			FString PlayerName;
			bool AroundPlayer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_AroundPlayer_SetBit = [](void* Obj){ ((EpicLeaderboardObject_eventGetLeaderboardEntries_Parms*)Obj)->AroundPlayer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AroundPlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "AroundPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AroundPlayer_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AroundPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EpicLeaderboard|Leaderboard" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
				{ "ToolTip", "Fetches entries for this leaderboard\n@param PlayerName - The player for which to return scores for.\n@param AroundPlayer - Return scores centered around player instead of the top scores." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "GetLeaderboardEntries", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry()
	{
		struct EpicLeaderboardObject_eventSubmitEntry_Parms
		{
			FString PlayerName;
			float PlayerScore;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerScore = { UE4CodeGen_Private::EPropertyClass::Float, "PlayerScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntry_Parms, PlayerScore), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntry_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerScore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EpicLeaderboard|Leaderboard" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
				{ "ToolTip", "Submit a leaderboard entry\n@param PlayerName - The player for which this score should be submitted.\n@param PlayerScore - The score to be submitted." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "SubmitEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EpicLeaderboardObject_eventSubmitEntry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata()
	{
		struct EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms
		{
			FString PlayerName;
			float PlayerScore;
			TMap<FString,FString> Metadata;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Metadata = { UE4CodeGen_Private::EPropertyClass::Map, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, Metadata), METADATA_PARAMS(NewProp_Metadata_MetaData, ARRAY_COUNT(NewProp_Metadata_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Metadata_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerScore = { UE4CodeGen_Private::EPropertyClass::Float, "PlayerScore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, PlayerScore), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metadata,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metadata_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metadata_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerScore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EpicLeaderboard|Leaderboard" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
				{ "ToolTip", "Submit a leaderboard entry with meta information attached\n@param PlayerName - The player for which this score should be submitted.\n@param PlayerScore - The score to be submitted.\n@param Metadata - The meta information to be submitted." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "SubmitEntryWithMetadata", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEpicLeaderboardObject_NoRegister()
	{
		return UEpicLeaderboardObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UEpicLeaderboardObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName, "CleanupName" }, // 3515806284
				{ &Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard, "GetEpicLeaderboard" }, // 4286737681
				{ &Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries, "GetLeaderboardEntries" }, // 2874458970
				{ &Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry, "SubmitEntry" }, // 1232196459
				{ &Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata, "SubmitEntryWithMetadata" }, // 1244587943
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "EpicLeaderboardObject.h" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerEntry_MetaData[] = {
				{ "Category", "EpicLeaderboard|Properties" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerEntry = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayerEntry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, PlayerEntry), Z_Construct_UScriptStruct_FEpicLeaderboardEntry, METADATA_PARAMS(NewProp_PlayerEntry_MetaData, ARRAY_COUNT(NewProp_PlayerEntry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardEntries_MetaData[] = {
				{ "Category", "EpicLeaderboard|Properties" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardEntries = { UE4CodeGen_Private::EPropertyClass::Array, "LeaderboardEntries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, LeaderboardEntries), METADATA_PARAMS(NewProp_LeaderboardEntries_MetaData, ARRAY_COUNT(NewProp_LeaderboardEntries_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LeaderboardEntries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEpicLeaderboardEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "Category", "EpicLeaderboard|Properties" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
				{ "Category", "EpicLeaderboard|Properties" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
				{ "ToolTip", "Properties" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Str, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, ID), METADATA_PARAMS(NewProp_ID_MetaData, ARRAY_COUNT(NewProp_ID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
				{ "Category", "EpicLeaderboard|Delegates" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, OnFailure), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature, METADATA_PARAMS(NewProp_OnFailure_MetaData, ARRAY_COUNT(NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "Category", "EpicLeaderboard|Delegates" },
				{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
				{ "ToolTip", "Delegates" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, OnSuccess), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerEntry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaderboardEntries,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaderboardEntries_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFailure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEpicLeaderboardObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEpicLeaderboardObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicLeaderboardObject, 1148553138);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicLeaderboardObject(Z_Construct_UClass_UEpicLeaderboardObject, &UEpicLeaderboardObject::StaticClass, TEXT("/Script/EpicLeaderboard"), TEXT("UEpicLeaderboardObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicLeaderboardObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
