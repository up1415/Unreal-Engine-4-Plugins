// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGestureRecognizerComponent;
#ifdef MOBILEGESTURERECOGNIZERPLUGIN_DynamicGestureRecognizer_generated_h
#error "DynamicGestureRecognizer.generated.h already included, missing '#pragma once' in DynamicGestureRecognizer.h"
#endif
#define MOBILEGESTURERECOGNIZERPLUGIN_DynamicGestureRecognizer_generated_h

#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_41_DELEGATE \
struct _Script_MobileGestureRecognizerPlugin_eventGestureMoved_Parms \
{ \
	UGestureRecognizerComponent* Recognizer; \
	float DeltaTime; \
}; \
static inline void FGestureMoved_DelegateWrapper(const FMulticastScriptDelegate& GestureMoved, UGestureRecognizerComponent* Recognizer, float DeltaTime) \
{ \
	_Script_MobileGestureRecognizerPlugin_eventGestureMoved_Parms Parms; \
	Parms.Recognizer=Recognizer; \
	Parms.DeltaTime=DeltaTime; \
	GestureMoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_40_DELEGATE \
struct _Script_MobileGestureRecognizerPlugin_eventGestureBegan_Parms \
{ \
	UGestureRecognizerComponent* Recognizer; \
	float DeltaTime; \
}; \
static inline void FGestureBegan_DelegateWrapper(const FMulticastScriptDelegate& GestureBegan, UGestureRecognizerComponent* Recognizer, float DeltaTime) \
{ \
	_Script_MobileGestureRecognizerPlugin_eventGestureBegan_Parms Parms; \
	Parms.Recognizer=Recognizer; \
	Parms.DeltaTime=DeltaTime; \
	GestureBegan.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_RPC_WRAPPERS
#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUDynamicGestureRecognizer(); \
	friend MOBILEGESTURERECOGNIZERPLUGIN_API class UClass* Z_Construct_UClass_UDynamicGestureRecognizer(); \
	public: \
	DECLARE_CLASS(UDynamicGestureRecognizer, UGestureRecognizerComponent, COMPILED_IN_FLAGS(0), 0, MobileGestureRecognizerPlugin, NO_API) \
	DECLARE_SERIALIZER(UDynamicGestureRecognizer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicGestureRecognizer*>(this); }


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_INCLASS \
	private: \
	static void StaticRegisterNativesUDynamicGestureRecognizer(); \
	friend MOBILEGESTURERECOGNIZERPLUGIN_API class UClass* Z_Construct_UClass_UDynamicGestureRecognizer(); \
	public: \
	DECLARE_CLASS(UDynamicGestureRecognizer, UGestureRecognizerComponent, COMPILED_IN_FLAGS(0), 0, MobileGestureRecognizerPlugin, NO_API) \
	DECLARE_SERIALIZER(UDynamicGestureRecognizer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicGestureRecognizer*>(this); }


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicGestureRecognizer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicGestureRecognizer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicGestureRecognizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicGestureRecognizer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UDynamicGestureRecognizer(const UDynamicGestureRecognizer& InCopy); \
public:


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicGestureRecognizer() { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UDynamicGestureRecognizer(const UDynamicGestureRecognizer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicGestureRecognizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicGestureRecognizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicGestureRecognizer)


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_47_PROLOG
#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_RPC_WRAPPERS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_INCLASS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_INCLASS_NO_PURE_DECLS \
	Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugins_Example_Project_Plugins_MobileGestureRecognizerPlugin_Source_MobileGestureRecognizerPlugin_Public_DynamicGestureRecognizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS