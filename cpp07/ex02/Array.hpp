#pragma once
#include <string>
#include <iostream>

template<typename T>
class Array
{
	public:
		Array(void) : _size(0), _arr(new T[0])
        {
            std::cout << "An Array has been created with default constructor." << std::endl;
        }

		Array(const Array &obj) : _size(obj._size), _arr(new T[obj._size])
        {
            std::cout << "An Array has been created with " << _size << " elemnts as a copy." << std::endl;
            for (size_t i = 0; i < _size; i++)
                _arr[i] = obj._arr[i];
        }

		Array(unsigned int n) : _size(static_cast<size_t>(n)), _arr(new T[n])
        {
            std::cout << "An Array has been created with " << n << " elemnts." << std::endl;
            for (size_t i = 0; i < _size; i++)
                _arr[i] = 0;
        }

		~Array(void)
        {
            std::cout << "An Array has been Destroied." << std::endl;
            delete [] _arr;
        }

		Array &operator = (Array const &arr)
        {
            if (this != &arr )
            {
                delete [] _arr;
                _size = arr._size;
                _arr = new T[_size];
                for (size_t i = 0; i < _size; i++)
                    _arr[i] = arr._arr[i];
                std::cout << "An Array has been created with " << _size << " elemnts as a asignation." << 	std::endl;
            }
            return (*this);
        }
		
        T& operator[] (int i)
        {
            if (i >= static_cast<int>(_size) || i < 0)
                throw InvalidIndexException();
            return (_arr[i]);
        }
		
		size_t	GetSize(void)
        {
            return (_size);
        }

		T*	GetArray(void)
        {
            return (this->_arr);
        }

		T	GetArrayData(size_t i)
        {
            return (_arr[i]);
        }
		
        void setSize(size_t i)
        {
            this->_size = i;
        }


		class InvalidIndexException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Invalid index");
				}
		};

	private:
		size_t	_size;
		T		*_arr;
};

template<typename T>
std::ostream&	operator << (std::ostream &o, Array<T> &arr)
{
	o << "Array of size: " << arr.getSize() << std::endl;
	for (size_t i = 0; i < arr.getSize(); i++)
		o << "Arr[ " << i << " ]: " << arr.GetArrayData(i) << std::endl;
	return (o);
}

