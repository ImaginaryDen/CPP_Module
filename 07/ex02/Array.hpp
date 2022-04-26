#pragma once

template <typename T>
class Array
{
private:
	T		*_array;
	int	_size;

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
	this->_size = n;
	this->_array = new T[this->_size];
}

template <typename T>
Array<T>::Array(const Array& copy)
{
	this->_size = copy._size;
	this->_array = new T[this->_size];
	
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = copy._array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete this->_array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy)
{
	if (this == &copy)
		return *this;
	
	delete this->_array;
	this->_size = copy._size;
	this->_array = new T[this->_size];

	for (int i = 0; i < this->_size; i++)
		this->_array[i] = copy._array[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= (int)this->_size)
		throw std::out_of_range("index out of range");
	return this->_array[index];
}

template <typename T>
int Array<T>::size() const
{
	return this->_size;
}
