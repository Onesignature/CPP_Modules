#pragma once

#include "Array.hpp"

template <typename T> 
Array<T>::Array() : a(0), len(0)
{}

template <typename T> 
Array<T>::Array(unsigned int n) : a(new T[n]), len(n)
{
}

template <typename T> 
Array<T>::Array(const Array<T> &obj) : len(obj.len)
{
	this->a = new T[obj.len];
	for (unsigned i = 0; i < this->len; i++)
	{
		this->a[i] = obj.a[i];
	}
	
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
	if (this == &obj)
		return (*this);
	if (this->a)
		delete [] this->a;
	this->a = new T[obj.len];
	for (int i = 0; i < this->len; i++)
		this->a[i] = obj.a[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i > (len - 1) || i < 0)
		throw std::runtime_error("Index provided is out of bound\n");
	return (this->a[i]);
}

template <typename T>
Array<T>::~Array()
{
	if (this->a)
		delete [] (this->a);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->len);
}