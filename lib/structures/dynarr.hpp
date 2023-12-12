#pragma once

#include <stdlib.h>
#include <string.h>

namespace linucxx
{
    template <typename TValue, typename TSize = size_t, unsigned int GrowthFactor = 2>
    struct dynarr
    {
	TValue *data;
	TSize length;
	TSize capacity;

	dynarr(const TSize len);
	~dynarr();

	void grow(const TSize size);

	TValue& operator[](const TSize index);
    };

    template <typename TValue, typename TSize = size_t, unsigned int GrowthFactor = 2>
    dynarr::dynarr(size_t len)
    {
	length = len;
	capacity = len;
	data = new TValue[len];
    }

    template <typename TValue, typename TSize = size_t, unsigned int GrowthFactor = 2>
    dynarr::~dynarr()
    {
	delete [] data;
    }

    template <typename TValue, typename TSize = size_t, unsigned int GrowthFactor = 2>
    TValue& dynarr::operator[](TSize index)
    {
	return data[index];
    }

    template <typename TValue, typename TSize = size_t, unsigned int GrowthFactor = 2>
    bool dynarr::grow(const TSize size)
    {
	if (size <= length)
	{
	    return false;
	}

	TValue *newarr = (TValue*) malloc(size * sizeof(TValue));
	memcpy(newarr, data, length * sizeof(TValue));
	
	free(data);
	data = newarr;

	return true;
    }

    template <typename TValue, typename TSize = size_t, unsigned int GrowthFactor = 2>
    void dynarr::append(const TValue& value)
    {
	if (length >= capacity)
	{
	    grow(length * GrowthFactor);
	}

	data[length] = value;
    }
}
