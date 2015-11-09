// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef MOBILEGESTURERECOGNIZERPLUGIN_TapGestureRecognizer_generated_h
#error "TapGestureRecognizer.generated.h already included, missing '#pragma once' in TapGestureRecognizer.h"
#endif
#define MOBILEGESTURERECOGNIZERPLUGIN_TapGestureRecognizer_generated_h

#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTapWasOnBottomHalf) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->TapWasOnBottomHalf(); \
	} \
 \
	DECLARE_FUNCTION(execTapWasOnTopHalf) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->TapWasOnTopHalf(); \
	} \
 \
	DECLARE_FUNCTION(execTapWasOnRightHalf) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->TapWasOnRightHalf(); \
	} \
 \
	DECLARE_FUNCTION(execTapWasOnLeftHalf) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->TapWasOnLeftHalf(); \
	} \
 \
	DECLARE_FUNCTION(execGetTapLocation) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->GetTapLocation(); \
	}


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTapWasOnBottomHalf) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->TapWasOnBottomHalf(); \
	} \
 \
	DECLARE_FUNCTION(execTapWasOnTopHalf) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->TapWasOnTopHalf(); \
	} \
 \
	DECLARE_FUNCTION(execTapWasOnRightHalf) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->TapWasOnRightHalf(); \
	} \
 \
	DECLARE_FUNCTION(execTapWasOnLeftHalf) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->TapWasOnLeftHalf(); \
	} \
 \
	DECLARE_FUNCTION(execGetTapLocation) \
	{ \
		P_FINISH; \
		*(FVector2D*)Z_Param__Result=this->GetTapLocation(); \
	}


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTapGestureRecognizer(); \
	friend MOBILEGESTURERECOGNIZERPLUGIN_API class UClass* Z_Construct_UClass_UTapGestureRecognizer(); \
	public: \
	DECLARE_CLASS(UTapGestureRecognizer, UGestureRecognizerComponent, COMPILED_IN_FLAGS(0), 0, MobileGestureRecognizerPlugin, NO_API) \
	DECLARE_SERIALIZER(UTapGestureRecognizer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UTapGestureRecognizer*>(this); }


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_INCLASS \
	private: \
	static void StaticRegisterNativesUTapGestureRecognizer(); \
	friend MOBILEGESTURERECOGNIZERPLUGIN_API class UClass* Z_Construct_UClass_UTapGestureRecognizer(); \
	public: \
	DECLARE_CLASS(UTapGestureRecognizer, UGestureRecognizerComponent, COMPILED_IN_FLAGS(0), 0, MobileGestureRecognizerPlugin, NO_API) \
	DECLARE_SERIALIZER(UTapGestureRecognizer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UTapGestureRecognizer*>(this); }


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTapGestureRecognizer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTapGestureRecognizer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTapGestureRecognizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTapGestureRecognizer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTapGestureRecognizer(const UTapGestureRecognizer& InCopy); \
public:


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTapGestureRecognizer(const UTapGestureRecognizer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTapGestureRecognizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTapGestureRecognizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTapGestureRecognizer)


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_43_PROLOG
#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_RPC_WRAPPERS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_INCLASS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_INCLASS_NO_PURE_DECLS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_TapGestureRecognizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
