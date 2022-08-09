
#include "Iter.hpp"

template<typename T>
void print(T a)
{
    std::cout << a << std::endl;
}

int main( void ) {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    std::string str[] = {"chaine1", "chaine2", "chaine3"};
    int len2 = sizeof(str) / sizeof(str[0]);
    double dbl[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int len3 = sizeof(dbl) / sizeof(dbl[0]);
    Iter(dbl, len3, print);

    Iter(str, len2, print);
    Iter(arr, len, print);
    return 0;
}