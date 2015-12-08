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

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1165;
// System.Text.StringBuilder
struct StringBuilder_t371;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X501::.cctor()
extern "C" void X501__cctor_m7138 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" String_t* X501_ToString_m7139 (Object_t * __this /* static, unused */, ASN1_t1165 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C" String_t* X501_ToString_m7140 (Object_t * __this /* static, unused */, ASN1_t1165 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" void X501_AppendEntry_m7141 (Object_t * __this /* static, unused */, StringBuilder_t371 * ___sb, ASN1_t1165 * ___entry, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
