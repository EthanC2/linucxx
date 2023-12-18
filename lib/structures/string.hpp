#pragma once

#include <sys/types.h>

namespace linucxx::structures
{
    template <typename TChar = char>
    struct String
    {
	TChar *str;
	size_t length;

	String();
	String(const String&);
	~String();
    };
}
