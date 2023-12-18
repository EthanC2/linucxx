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

	Array();

	template <typename... Elements>
	Array(Elements... elements);

	ssize_t append(const TElement& element);
	TElement& operator[](size_t index);
    };

    template <typename TElement, size_t Capacity>
    Array<TElement,Capacity>::Array(): capacity(Capacity) 
    {
	this->length = 0;
    }

    template <typename TElement, size_t Capacity>
    template <typename... Elements>
    Array<TElement,Capacity>::Array(Elements... elements): data({elements...}), capacity(Capacity)
    {
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
    TElement& Array<TElement,Capacity>::operator[](size_t index)
    {
	return data[index];
    }
}
