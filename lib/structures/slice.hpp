#pragma once

#include <sys/types.h>

namespace linucxx::structures
{
    template <typename T>
    struct Slice
    {
	T* ptr;
	size_t length;

	Slice() = default;
	Slice(T* ptr, size_t length);
	T& operator[](size_t index);
	operator T*();
    };

    template <typename T>
    Slice<T>::Slice(T* ptr, size_t length)
    {
	this->ptr = ptr;
	this->length = length;
    }

    template <typename T>
    T& Slice<T>::operator[](size_t index)
    {
	return ptr[index];
    }

    template <typename T>
    Slice<T>::operator T*()
    {
	return ptr;
    }
}
