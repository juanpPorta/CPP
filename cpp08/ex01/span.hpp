#pragma once
#include <vector>
#include <list>
#include <iterator>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
class Span
{
	private:
		unsigned int fill;
		std::vector<int> _array;
	public:
		Span();
		Span(unsigned int num);
		~Span();
		void addNumber(int number);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		std::vector<int>& getList(void);
		int shortestSpan();
		int longestSpan();
		class NoSpanException: public std::exception
		{
				public:
					virtual const char* what() const throw()
					{
						return ("No Span Error");
					}
		};
		class InvalidSpanAddException: public std::exception
		{
				public:
					virtual const char* what() const throw()
					{
						return ("Tamaño de vector full");
					}
		};
		void fillbyvector(std::vector<int> from_vector);
};

// typename ::iterator Numers(std::iterator::vector a.begin(), )
// {
// 		for (typename T::iterator i = a.begin(); i <= num; i++)
// 		{
			
// 		}
// 		throw(InvalidIndexException());

// }