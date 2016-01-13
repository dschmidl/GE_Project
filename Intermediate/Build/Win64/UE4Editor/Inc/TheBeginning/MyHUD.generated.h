// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEBEGINNING_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define THEBEGINNING_MyHUD_generated_h

#define TheBeginning_Source_TheBeginning_MyHUD_h_78_RPC_WRAPPERS
#define TheBeginning_Source_TheBeginning_MyHUD_h_78_RPC_WRAPPERS_NO_PURE_DECLS
#define TheBeginning_Source_TheBeginning_MyHUD_h_78_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend THEBEGINNING_API class UClass* Z_Construct_UClass_AMyHUD(); \
	public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TheBeginning, NO_API) \
	DECLARE_SERIALIZER(AMyHUD) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMyHUD*>(this); }


#define TheBeginning_Source_TheBeginning_MyHUD_h_78_INCLASS \
	private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend THEBEGINNING_API class UClass* Z_Construct_UClass_AMyHUD(); \
	public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TheBeginning, NO_API) \
	DECLARE_SERIALIZER(AMyHUD) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMyHUD*>(this); }


#define TheBeginning_Source_TheBeginning_MyHUD_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMyHUD(const AMyHUD& InCopy); \
public:


#define TheBeginning_Source_TheBeginning_MyHUD_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMyHUD(const AMyHUD& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD)


#define TheBeginning_Source_TheBeginning_MyHUD_h_73_PROLOG
#define TheBeginning_Source_TheBeginning_MyHUD_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBeginning_Source_TheBeginning_MyHUD_h_78_RPC_WRAPPERS \
	TheBeginning_Source_TheBeginning_MyHUD_h_78_INCLASS \
	TheBeginning_Source_TheBeginning_MyHUD_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheBeginning_Source_TheBeginning_MyHUD_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBeginning_Source_TheBeginning_MyHUD_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	TheBeginning_Source_TheBeginning_MyHUD_h_78_INCLASS_NO_PURE_DECLS \
	TheBeginning_Source_TheBeginning_MyHUD_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheBeginning_Source_TheBeginning_MyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
