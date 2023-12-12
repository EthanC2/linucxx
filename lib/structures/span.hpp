#pragma once

namespace linucxx::structures
{
    template <typename T>
    struct Span
    {
	T* ptr;
	size_t length;

	Span() = default;
	Span(T* ptr, size_t length);
	T& operator[](size_t index);
	operator T*();
    };

    template <typename T>
    Span<T>::Span(T* ptr, size_t length)
    {
	this->ptr = ptr;
	this->length = length;
    }

    template <typename T>
    T& Span<T>::operator[](size_t index)
    {
	return ptr[index];
    }

    template <typename T>
    Span<T>::operator T*()
    {
	return ptr;
    }
}
