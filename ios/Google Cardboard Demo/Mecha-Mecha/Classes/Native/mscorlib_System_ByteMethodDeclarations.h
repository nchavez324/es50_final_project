#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1744;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Object System.Byte::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Byte_System_IConvertible_ToType_m6038 (uint8_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Byte_System_IConvertible_ToBoolean_m6039 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Byte_System_IConvertible_ToByte_m6040 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Byte::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Byte_System_IConvertible_ToChar_m6041 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Byte::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t93  Byte_System_IConvertible_ToDateTime_m6042 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Byte::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1086  Byte_System_IConvertible_ToDecimal_m6043 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Byte::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Byte_System_IConvertible_ToDouble_m6044 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Byte::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Byte_System_IConvertible_ToInt16_m6045 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Byte_System_IConvertible_ToInt32_m6046 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Byte::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Byte_System_IConvertible_ToInt64_m6047 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Byte::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Byte_System_IConvertible_ToSByte_m6048 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Byte::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Byte_System_IConvertible_ToSingle_m6049 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Byte::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Byte_System_IConvertible_ToUInt16_m6050 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Byte::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Byte_System_IConvertible_ToUInt32_m6051 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Byte::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Byte_System_IConvertible_ToUInt64_m6052 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Object)
extern "C" int32_t Byte_CompareTo_m6053 (uint8_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::Equals(System.Object)
extern "C" bool Byte_Equals_m6054 (uint8_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::GetHashCode()
extern "C" int32_t Byte_GetHashCode_m6055 (uint8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Byte)
extern "C" int32_t Byte_CompareTo_m6056 (uint8_t* __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::Equals(System.Byte)
extern "C" bool Byte_Equals_m6057 (uint8_t* __this, uint8_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String,System.IFormatProvider)
extern "C" uint8_t Byte_Parse_m6058 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" uint8_t Byte_Parse_m6059 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String)
extern "C" uint8_t Byte_Parse_m6060 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::TryParse(System.String,System.Byte&)
extern "C" bool Byte_TryParse_m6061 (Object_t * __this /* static, unused */, String_t* ___s, uint8_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Byte&)
extern "C" bool Byte_TryParse_m6062 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, uint8_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString()
extern "C" String_t* Byte_ToString_m4867 (uint8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String)
extern "C" String_t* Byte_ToString_m4804 (uint8_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.IFormatProvider)
extern "C" String_t* Byte_ToString_m4813 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Byte_ToString_m4819 (uint8_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
