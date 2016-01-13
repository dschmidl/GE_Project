// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEBEGINNING_Avatar_generated_h
#error "Avatar.generated.h already included, missing '#pragma once' in Avatar.h"
#endif
#define THEBEGINNING_Avatar_generated_h

#define TheBeginning_Source_TheBeginning_Avatar_h_11_RPC_WRAPPERS
#define TheBeginning_Source_TheBeginning_Avatar_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define TheBeginning_Source_TheBeginning_Avatar_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAAvatar(); \
	friend THEBEGINNING_API class UClass* Z_Construct_UClass_AAvatar(); \
	public: \
	DECLARE_CLASS(AAvatar, ACharacter, COMPILED_IN_FLAGS(0), 0, TheBeginning, NO_API) \
	DECLARE_SERIALIZER(AAvatar) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AAvatar*>(this); }


#define TheBeginning_Source_TheBeginning_Avatar_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAAvatar(); \
	friend THEBEGINNING_API class UClass* Z_Construct_UClass_AAvatar(); \
	public: \
	DECLARE_CLASS(AAvatar, ACharacter, COMPILED_IN_FLAGS(0), 0, TheBeginning, NO_API) \
	DECLARE_SERIALIZER(AAvatar) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AAvatar*>(this); }


#define TheBeginning_Source_TheBeginning_Avatar_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAvatar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAvatar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvatar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvatar); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AAvatar(const AAvatar& InCopy); \
public:


#define TheBeginning_Source_TheBeginning_Avatar_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AAvatar(const AAvatar& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvatar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvatar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvatar)


#define TheBeginning_Source_TheBeginning_Avatar_h_8_PROLOG
#define TheBeginning_Source_TheBeginning_Avatar_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBeginning_Source_TheBeginning_Avatar_h_11_RPC_WRAPPERS \
	TheBeginning_Source_TheBeginning_Avatar_h_11_INCLASS \
	TheBeginning_Source_TheBeginning_Avatar_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheBeginning_Source_TheBeginning_Avatar_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBeginning_Source_TheBeginning_Avatar_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TheBeginning_Source_TheBeginning_Avatar_h_11_INCLASS_NO_PURE_DECLS \
	TheBeginning_Source_TheBeginning_Avatar_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheBeginning_Source_TheBeginning_Avatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
