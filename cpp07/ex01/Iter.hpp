#pragma once
#include <string>
#include <iostream>

template<typename T>
void Iter(T *array, int leng, void (*print)(T const &a))
{
    for (int i = 0; i < leng; i++)
        print(array[i]);
}
