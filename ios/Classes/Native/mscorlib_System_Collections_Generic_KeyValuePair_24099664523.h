﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t19570940;
// BestHTTP.Caching.HTTPCacheFileInfo
struct HTTPCacheFileInfo_t2858191078;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Uri,BestHTTP.Caching.HTTPCacheFileInfo>
struct  KeyValuePair_2_t4099664523 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Uri_t19570940 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	HTTPCacheFileInfo_t2858191078 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4099664523, ___key_0)); }
	inline Uri_t19570940 * get_key_0() const { return ___key_0; }
	inline Uri_t19570940 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Uri_t19570940 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4099664523, ___value_1)); }
	inline HTTPCacheFileInfo_t2858191078 * get_value_1() const { return ___value_1; }
	inline HTTPCacheFileInfo_t2858191078 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(HTTPCacheFileInfo_t2858191078 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif