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

// System.String
struct String_t;
// UnityEngine.Object
struct Object_t100;
struct Object_t100_marshaled;
// System.Exception
struct Exception_t134;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m2986 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t100 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m2987 (Object_t * __this /* static, unused */, Exception_t134 * ___exception, Object_t100 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m387 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m461 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m2219 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t100 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m2988 (Object_t * __this /* static, unused */, Exception_t134 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m2174 (Object_t * __this /* static, unused */, Exception_t134 * ___exception, Object_t100 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m408 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m2499 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t100 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
