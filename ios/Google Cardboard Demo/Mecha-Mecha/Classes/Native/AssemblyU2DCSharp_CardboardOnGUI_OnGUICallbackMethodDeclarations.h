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

// CardboardOnGUI/OnGUICallback
struct OnGUICallback_t12;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void CardboardOnGUI/OnGUICallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnGUICallback__ctor_m28 (OnGUICallback_t12 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardOnGUI/OnGUICallback::Invoke()
extern "C" void OnGUICallback_Invoke_m29 (OnGUICallback_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnGUICallback_t12(Il2CppObject* delegate);
// System.IAsyncResult CardboardOnGUI/OnGUICallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnGUICallback_BeginInvoke_m30 (OnGUICallback_t12 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardOnGUI/OnGUICallback::EndInvoke(System.IAsyncResult)
extern "C" void OnGUICallback_EndInvoke_m31 (OnGUICallback_t12 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
