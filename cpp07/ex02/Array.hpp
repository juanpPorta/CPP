#pragma once
#include <string>
#include <iostream>

template<typename T>
class Array
{
    public:
        Array(void);
        Array(const Array &src);
        Array(unsigned int n);
        ~Array(void);

        Array& operator[] (int);
        size_t getSize(void);
        T* getArr(void);
        T getValue(size_t data);
    private:
        T *_arr;
        size_t _size;
        

};

template<typename T>
Array<t>::Array(void) : _arr(new T[0]), _size(0)
{
    std::cout << "Default constructor" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &src) : _arr(new T[src._size]), _size(src._size)
{
    std::cout << "Copy constructor" << std::endl;
    for (size_t i = 0; i < _size; i++)
        _arr[i] = src._arr[i];
}

template<typename T>
Array<T>::Array(unsigned int n) : , _size(static_cast<size_t>(n)), _arr(new T[n])
{
    std::cout << "Constructor with size" << std::endl;
    for (size_t i = 0; i < _size; i++)
        _arr[i] = 0;
}

template<typename T>
Array<T>::~Array(void)
{
    std::cout << "Destructor" << std::endl;
    delete [] _arr;
}

