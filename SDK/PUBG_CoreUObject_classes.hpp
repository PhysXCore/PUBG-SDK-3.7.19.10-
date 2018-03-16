#pragma once

// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CoreUObject_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:
	static FUObjectArray*                              GObjects;                                                 // 0x0000(0x0000)
	void*                                              Vtable;                                                   // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static inline TUObjectArray& GetGlobalObjects()
	{
		return GObjects->ObjObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1);
		return ptr;
	}


	void ExecuteUbergraph(int EntryPoint);
};


// Class CoreUObject.Interface
// 0x0000 (0x0028 - 0x0028)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(2);
		return ptr;
	}

};


// Class CoreUObject.GCObjectReferencer
// 0x0038 (0x0060 - 0x0028)
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(508);
		return ptr;
	}

};


// Class CoreUObject.TextBuffer
// 0x0028 (0x0050 - 0x0028)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(509);
		return ptr;
	}

};


// Class CoreUObject.Field
// 0x0008 (0x0030 - 0x0028)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(510);
		return ptr;
	}

};


// Class CoreUObject.Struct
// 0x00A8 (0x00D8 - 0x0030)
class UStruct : public UField
{
public:
	class UStruct*                                     SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData0x0048[0x90];                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(511);
		return ptr;
	}

};


// Class CoreUObject.ScriptStruct
// 0x0010 (0x00E8 - 0x00D8)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(512);
		return ptr;
	}

};


// Class CoreUObject.Package
// 0x0130 (0x0158 - 0x0028)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0028(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(513);
		return ptr;
	}

};


// Class CoreUObject.Class
// 0x01D0 (0x02A8 - 0x00D8)
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x00D8(0x01D0) MISSED OFFSET

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(514);
		return ptr;
	}

	inline UObject* CreateDefaultObject()
	{
		return GetVFunction<UObject*(*)(UClass*)>(this, 100)(this);
	}

};


// Class CoreUObject.Function
// 0x0038 (0x0110 - 0x00D8)
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               EncryptedFunc[0x10];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(515);
		return ptr;
	}

};


// Class CoreUObject.DelegateFunction
// 0x0000 (0x0110 - 0x0110)
class UDelegateFunction : public UFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(516);
		return ptr;
	}

};


// Class CoreUObject.DynamicClass
// 0x0068 (0x0310 - 0x02A8)
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(517);
		return ptr;
	}

};


// Class CoreUObject.PackageMap
// 0x00B8 (0x00E0 - 0x0028)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(518);
		return ptr;
	}

};


// Class CoreUObject.Enum
// 0x0030 (0x0060 - 0x0030)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(519);
		return ptr;
	}

};


// Class CoreUObject.Property
// 0x0060 (0x0090 - 0x0030)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(520);
		return ptr;
	}

};


// Class CoreUObject.EnumProperty
// 0x0010 (0x00A0 - 0x0090)
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(521);
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderClass
// 0x01A0 (0x0448 - 0x02A8)
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x02A8(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(522);
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00B0 (0x00D8 - 0x0028)
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(523);
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderFunction
// 0x01A0 (0x02B0 - 0x0110)
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0110(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(524);
		return ptr;
	}

};


// Class CoreUObject.MetaData
// 0x00A0 (0x00C8 - 0x0028)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(525);
		return ptr;
	}

};


// Class CoreUObject.ObjectRedirector
// 0x0008 (0x0030 - 0x0028)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(526);
		return ptr;
	}

};


// Class CoreUObject.ArrayProperty
// 0x0000 (0x0090 - 0x0090)
class UArrayProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(527);
		return ptr;
	}

};


// Class CoreUObject.ObjectPropertyBase
// 0x0000 (0x0090 - 0x0090)
class UObjectPropertyBase : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(528);
		return ptr;
	}

};


// Class CoreUObject.AssetObjectProperty
// 0x0000 (0x0090 - 0x0090)
class UAssetObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(529);
		return ptr;
	}

};


// Class CoreUObject.AssetClassProperty
// 0x0010 (0x00A0 - 0x0090)
class UAssetClassProperty : public UAssetObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(530);
		return ptr;
	}

};


// Class CoreUObject.BoolProperty
// 0x0000 (0x0090 - 0x0090)
class UBoolProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(531);
		return ptr;
	}

};


// Class CoreUObject.NumericProperty
// 0x0000 (0x0090 - 0x0090)
class UNumericProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(532);
		return ptr;
	}

};


// Class CoreUObject.ByteProperty
// 0x0000 (0x0090 - 0x0090)
class UByteProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(533);
		return ptr;
	}

};


// Class CoreUObject.ObjectProperty
// 0x0000 (0x0090 - 0x0090)
class UObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(534);
		return ptr;
	}

};


// Class CoreUObject.ClassProperty
// 0x0010 (0x00A0 - 0x0090)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(535);
		return ptr;
	}

};


// Class CoreUObject.DelegateProperty
// 0x0000 (0x0090 - 0x0090)
class UDelegateProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(536);
		return ptr;
	}

};


// Class CoreUObject.DoubleProperty
// 0x0000 (0x0090 - 0x0090)
class UDoubleProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(537);
		return ptr;
	}

};


// Class CoreUObject.FloatProperty
// 0x0000 (0x0090 - 0x0090)
class UFloatProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(538);
		return ptr;
	}

};


// Class CoreUObject.IntProperty
// 0x0000 (0x0090 - 0x0090)
class UIntProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(539);
		return ptr;
	}

};


// Class CoreUObject.Int16Property
// 0x0000 (0x0090 - 0x0090)
class UInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(540);
		return ptr;
	}

};


// Class CoreUObject.Int64Property
// 0x0000 (0x0090 - 0x0090)
class UInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(541);
		return ptr;
	}

};


// Class CoreUObject.Int8Property
// 0x0000 (0x0090 - 0x0090)
class UInt8Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(542);
		return ptr;
	}

};


// Class CoreUObject.InterfaceProperty
// 0x0000 (0x0090 - 0x0090)
class UInterfaceProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(543);
		return ptr;
	}

};


// Class CoreUObject.LazyObjectProperty
// 0x0000 (0x0090 - 0x0090)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(544);
		return ptr;
	}

};


// Class CoreUObject.MapProperty
// 0x0030 (0x00C0 - 0x0090)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(545);
		return ptr;
	}

};


// Class CoreUObject.MulticastDelegateProperty
// 0x0000 (0x0090 - 0x0090)
class UMulticastDelegateProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(546);
		return ptr;
	}

};


// Class CoreUObject.NameProperty
// 0x0000 (0x0090 - 0x0090)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(547);
		return ptr;
	}

};


// Class CoreUObject.SetProperty
// 0x0020 (0x00B0 - 0x0090)
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(548);
		return ptr;
	}

};


// Class CoreUObject.StrProperty
// 0x0000 (0x0090 - 0x0090)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(549);
		return ptr;
	}

};


// Class CoreUObject.StructProperty
// 0x0000 (0x0090 - 0x0090)
class UStructProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(550);
		return ptr;
	}

};


// Class CoreUObject.UInt16Property
// 0x0000 (0x0090 - 0x0090)
class UUInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(551);
		return ptr;
	}

};


// Class CoreUObject.UInt32Property
// 0x0000 (0x0090 - 0x0090)
class UUInt32Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(552);
		return ptr;
	}

};


// Class CoreUObject.UInt64Property
// 0x0000 (0x0090 - 0x0090)
class UUInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(553);
		return ptr;
	}

};


// Class CoreUObject.WeakObjectProperty
// 0x0000 (0x0090 - 0x0090)
class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(554);
		return ptr;
	}

};


// Class CoreUObject.TextProperty
// 0x0000 (0x0090 - 0x0090)
class UTextProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(555);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
