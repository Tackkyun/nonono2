// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOAH_NoahGameMode_generated_h
#error "NoahGameMode.generated.h already included, missing '#pragma once' in NoahGameMode.h"
#endif
#define NOAH_NoahGameMode_generated_h

#define Noah_Source_Noah_NoahGameMode_h_9_RPC_WRAPPERS
#define Noah_Source_Noah_NoahGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Noah_Source_Noah_NoahGameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesANoahGameMode(); \
	friend NOAH_API class UClass* Z_Construct_UClass_ANoahGameMode(); \
	public: \
	DECLARE_CLASS(ANoahGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Noah"), NOAH_API) \
	DECLARE_SERIALIZER(ANoahGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Noah_Source_Noah_NoahGameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesANoahGameMode(); \
	friend NOAH_API class UClass* Z_Construct_UClass_ANoahGameMode(); \
	public: \
	DECLARE_CLASS(ANoahGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Noah"), NOAH_API) \
	DECLARE_SERIALIZER(ANoahGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Noah_Source_Noah_NoahGameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NOAH_API ANoahGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANoahGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NOAH_API, ANoahGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoahGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NOAH_API ANoahGameMode(ANoahGameMode&&); \
	NOAH_API ANoahGameMode(const ANoahGameMode&); \
public:


#define Noah_Source_Noah_NoahGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NOAH_API ANoahGameMode(ANoahGameMode&&); \
	NOAH_API ANoahGameMode(const ANoahGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NOAH_API, ANoahGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoahGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANoahGameMode)


#define Noah_Source_Noah_NoahGameMode_h_9_PRIVATE_PROPERTY_OFFSET
#define Noah_Source_Noah_NoahGameMode_h_6_PROLOG
#define Noah_Source_Noah_NoahGameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Noah_Source_Noah_NoahGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	Noah_Source_Noah_NoahGameMode_h_9_RPC_WRAPPERS \
	Noah_Source_Noah_NoahGameMode_h_9_INCLASS \
	Noah_Source_Noah_NoahGameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Noah_Source_Noah_NoahGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Noah_Source_Noah_NoahGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	Noah_Source_Noah_NoahGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Noah_Source_Noah_NoahGameMode_h_9_INCLASS_NO_PURE_DECLS \
	Noah_Source_Noah_NoahGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Noah_Source_Noah_NoahGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
