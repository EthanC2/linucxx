#pragma once

#include <sys/types.h>

namespace linucxx::structures
{
    template <typename TElement, size_t Capacity>
    struct Array
    {
	TElement data[Capacity];
	const size_t capacity;
	size_t length;

	template <typename... Elements>
	Array(Elements... elements);

	ssize_t append(const TElement& element);
	ssize_t contains(const TElement& element);
	constexpr void fill(const TElement& element);
	TElement& operator[](size_t index);
    };

    template <typename TElement, size_t Capacity>
    template <typename... Elements>
    Array<TElement,Capacity>::Array(Elements... elements): data({elements...}), capacity(Capacity)
    {
	static_assert(sizeof...(Elements) <= Capacity, "array constructor received more elements than the capacity of the array");
	this->length = sizeof...(Elements);
    }

    template <typename TElement, size_t Capacity>
    ssize_t Array<TElement,Capacity>::append(const TElement& element)
    {
	if (length >= capacity)
	{
	    return (ssize_t) -1;
	}

	data[length] = element;
	return (ssize_t) length++;
    }

    template <typename TElement, size_t Capacity>
    ssize_t Array<TElement,Capacity>::contains(const TElement& element)
    {
	for (size_t i = 0; i < length; ++i)
	{
	    if (data[i] == element)
	    {
		return i;
	    }
	}

	return (ssize_t) -1;
    }

    template <typename TElement, size_t Capacity>
    constexpr void Array<TElement,Capacity>::fill(const TElement& element)
    {
	length = capacity;

	for (size_t i = 0; i < capacity; ++i)
	{
	    data[i] = element;
	}
    }

    template <typename TElement, size_t Capacity>
    TElement& Array<TElement,Capacity>::operator[](size_t index)
    {
	return data[index];
    }
}
