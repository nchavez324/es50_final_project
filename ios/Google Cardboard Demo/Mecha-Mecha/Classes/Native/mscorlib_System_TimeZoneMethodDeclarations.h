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

// System.TimeZone
struct TimeZone_t1709;
// System.Globalization.DaylightTime
struct DaylightTime_t1229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m10919 (TimeZone_t1709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m10920 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1709 * TimeZone_get_CurrentTimeZone_m10921 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10922 (TimeZone_t1709 * __this, DateTime_t93  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10923 (Object_t * __this /* static, unused */, DateTime_t93  ___time, DaylightTime_t1229 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t93  TimeZone_ToLocalTime_m10924 (TimeZone_t1709 * __this, DateTime_t93  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t93  TimeZone_ToUniversalTime_m10925 (TimeZone_t1709 * __this, DateTime_t93  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t92  TimeZone_GetLocalTimeDiff_m10926 (TimeZone_t1709 * __this, DateTime_t93  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t92  TimeZone_GetLocalTimeDiff_m10927 (TimeZone_t1709 * __this, DateTime_t93  ___time, TimeSpan_t92  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
