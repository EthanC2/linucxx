#pragma once

#include <sys/types.h>

namespace linucxx::structures
{
    template <typename T>
    struct RangedPtr
    {
	T* ptr;
	size_t length;

	RangedPtr() = default;
	RangedPtr(T* ptr, size_t length);
	T& operator[](size_t index);
	operator T*();
    };

    template <typename T>
    RangedPtr<T>::RangedPtr(T* ptr, size_t length)
    {
	this->ptr = ptr;
	this->length = length;
    }

    template <typename T>
    T& RangedPtr<T>::operator[](size_t index)
    {
	return ptr[index];
    }

    template <typename T>
    RangedPtr<T>::operator T*()
    {
	return ptr;
    }
}
