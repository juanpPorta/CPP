#pragma once
#include <vector>
#include <list>
#include <iterator>

class InvalidIndexException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("NUMERO NO ENCONTRADO");
				}
};

template<class T>
typename T::iterator easyfind(T a, int b)
{
		for (typename T::iterator i = a.begin(); i != a.end() ; i++)
		{
			if (b == *i)
			{
				std::cout<<"numero encontrado!!"<< *i <<std::endl;
				return(i);
			}
		}
		throw(InvalidIndexException());

}
