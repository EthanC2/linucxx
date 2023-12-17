#pragma once

#include <sys/types.h>

namespace linucxx::structures
{
    template <typename TElement, size_t Capacity>
    struct Array
    {
	TElement data[Capacity];
	size_t length;
	const size_t capacity;

	Array();

	ssize_t append(const TElement& element);
	TElement& operator[](size_t index);
    };

    template <typename TElement, size_t Capacity>
    Array<TElement,Capacity>::Array(): capacity(Capacity) 
    {
	this->length = 0;
    }

    template <typename TElement, size_t Capacity>
    ssize_t Array<TElement,Capacity>::append(const TElement& element)
    {
	if (length >= capacity)
	{
	    return (ssize_t) -1;
	}

	data[length] = element;
	return length++;
    }

    template <typename TElement, size_t Capacity>
    TElement& Array<TElement,Capacity>::operator[](size_t index)
    {
	return data[index];
    }
}
