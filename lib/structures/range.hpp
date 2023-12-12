#pragma once

#include <sys/types.h>

namespace linucxx::structures
{
    template <typename T = size_t>
    struct Range
    {
	T start;
	T end;

	Range() = default;

	virtual bool contains(const T& element) = 0;
    };

    template <typename T = size_t>
    struct InclusiveRange : Range<T>
    {
	InclusiveRange(T start, T end)
	{
	    this->start = start;
	    this->end = end;
	}

	bool contains(const T& element) override
	{
	    return this->start <= element and element <= this->end;
	}
    };

    template <typename T = size_t>
    struct ExclusiveRange : Range<T>
    {
	ExclusiveRange(T start, T end)
	{
	    this->start = start;
	    this->end = end;
	}

	bool contains(const T& element) override
	{
	    return this->start < element and element < this->end;
	}
    };
}
