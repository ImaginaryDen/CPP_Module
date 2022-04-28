#pragma once

template <typename T>
class Array
{
private:
	T		*_array;
	int		_size;

public:
	Array(unsigned int n = 0);
	Array(const Array& copy);
	Array& operator=(const Array& copy);
	~Array();

	T& operator[](int index);
	int size() const;
};

template <typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(const Array& copy)
{
	_array = NULL;
	operator=(copy);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy)
{
	if (_array)
		delete[] _array;
	_size = copy._size;
	_array = new T[_size];

	for (int i = 0; i < _size; i++)
		_array[i] = copy._array[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= _size)
		throw std::out_of_range("index out of range");
	return _array[index];
}

template <typename T>
int Array<T>::size() const
{
	return _size;
}
