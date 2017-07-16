#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.Type,GvrEventExecutor/EventDelegate>
struct Dictionary_2_t1587644483;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrEventExecutor
struct  GvrEventExecutor_t1694572606  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,GvrEventExecutor/EventDelegate> GvrEventExecutor::eventTable
	Dictionary_2_t1587644483 * ___eventTable_0;

public:
	inline static int32_t get_offset_of_eventTable_0() { return static_cast<int32_t>(offsetof(GvrEventExecutor_t1694572606, ___eventTable_0)); }
	inline Dictionary_2_t1587644483 * get_eventTable_0() const { return ___eventTable_0; }
	inline Dictionary_2_t1587644483 ** get_address_of_eventTable_0() { return &___eventTable_0; }
	inline void set_eventTable_0(Dictionary_2_t1587644483 * value)
	{
		___eventTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventTable_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
