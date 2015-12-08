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


#include "codegen/il2cpp-codegen.h"

extern "C" void IRCoordinate_t8_marshal(const IRCoordinate_t8& unmarshaled, IRCoordinate_t8_marshaled& marshaled);
extern "C" void IRCoordinate_t8_marshal_back(const IRCoordinate_t8_marshaled& marshaled, IRCoordinate_t8& unmarshaled);
extern "C" void IRCoordinate_t8_marshal_cleanup(IRCoordinate_t8_marshaled& marshaled);
