﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextReader
struct TextReader_t1184;

#include "mscorlib_System_IO_TextReader.h"

// System.IO.SynchronizedReader
struct  SynchronizedReader_t1266  : public TextReader_t1184
{
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t1184 * ___reader_1;
};
