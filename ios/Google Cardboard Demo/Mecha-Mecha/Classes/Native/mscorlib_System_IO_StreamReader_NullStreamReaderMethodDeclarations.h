﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_t1261;
// System.Char[]
struct CharU5BU5D_t262;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern "C" void NullStreamReader__ctor_m8015 (NullStreamReader_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern "C" int32_t NullStreamReader_Peek_m8016 (NullStreamReader_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern "C" int32_t NullStreamReader_Read_m8017 (NullStreamReader_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t NullStreamReader_Read_m8018 (NullStreamReader_t1261 * __this, CharU5BU5D_t262* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern "C" String_t* NullStreamReader_ReadLine_m8019 (NullStreamReader_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern "C" String_t* NullStreamReader_ReadToEnd_m8020 (NullStreamReader_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
