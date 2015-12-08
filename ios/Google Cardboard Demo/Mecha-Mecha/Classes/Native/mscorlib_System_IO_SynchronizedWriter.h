#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1077;

#include "mscorlib_System_IO_TextWriter.h"

// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t1268  : public TextWriter_t1077
{
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t1077 * ___writer_2;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_3;
};
