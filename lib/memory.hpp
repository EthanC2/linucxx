#pragma once

namespace linucxx::memory
{
    template <typename T>
    struct OwnedPtr
    {
	T* ptr;

	OwnedPtr() = default;
	OwnedPtr(T* ptr);
	~OwnedPtr();
	OwnedPtr(const OwnedPtr<T>&) = delete;
	OwnedPtr<T>& operator=(const OwnedPtr<T>&) = delete;
    
	operator T*();
    };

    template <typename T>
    OwnedPtr<T>::OwnedPtr(T* ptr)
    {
	this->ptr = ptr;
    }

    template <typename T>
    OwnedPtr<T>::~OwnedPtr()
    {
	delete ptr;
    }

    template <typename T>
    OwnedPtr<T>::operator T*()
    {
	return ptr;
    }
}
