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

// System.Text.Latin1Encoding
struct Latin1Encoding_t1615;
// System.Char[]
struct CharU5BU5D_t262;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t87;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1610;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C" void Latin1Encoding__ctor_m9932 (Latin1Encoding_t1615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetByteCount_m9933 (Latin1Encoding_t1615 * __this, CharU5BU5D_t262* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C" int32_t Latin1Encoding_GetByteCount_m9934 (Latin1Encoding_t1615 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m9935 (Latin1Encoding_t1615 * __this, CharU5BU5D_t262* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t87* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m9936 (Latin1Encoding_t1615 * __this, CharU5BU5D_t262* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t87* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1610 ** ___buffer, CharU5BU5D_t262** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m9937 (Latin1Encoding_t1615 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t87* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m9938 (Latin1Encoding_t1615 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t87* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1610 ** ___buffer, CharU5BU5D_t262** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetCharCount_m9939 (Latin1Encoding_t1615 * __this, ByteU5BU5D_t87* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t Latin1Encoding_GetChars_m9940 (Latin1Encoding_t1615 * __this, ByteU5BU5D_t87* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t262* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxByteCount_m9941 (Latin1Encoding_t1615 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxCharCount_m9942 (Latin1Encoding_t1615 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Latin1Encoding_GetString_m9943 (Latin1Encoding_t1615 * __this, ByteU5BU5D_t87* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C" String_t* Latin1Encoding_GetString_m9944 (Latin1Encoding_t1615 * __this, ByteU5BU5D_t87* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
