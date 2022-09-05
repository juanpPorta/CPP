#include "span.hpp"

Span::Span() : fill(0), _array()
{

}

Span::Span(unsigned int num) : fill(0), _array(std::vector<int>(num, 0))
{
	
}

void Span::addNumber(int num)
{
	if ( this->fill < this->_array.size())
	{
		this->_array[fill] = num;
		this->fill++;
	}
	else
		throw Span::InvalidSpanAddException();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		if ( this->fill < this->_array.size())
		{
			this->_array[this->fill] = *begin;
			this->fill++;
			begin++;
		}
		else
			throw Span::InvalidSpanAddException();
	}
}

int Span::shortestSpan(void)
{
	int min = INT32_MAX;
	if (this->fill <= 1)
		throw(Span::NoSpanException());
	for (std::vector<int>::iterator iter = _array.begin(); iter != _array.end(); iter++)
		for (std::vector<int>::iterator jt = _array.begin(); jt < _array.end(); jt++)
			if (jt != iter && abs(*jt - *iter) < min)
				min = abs(*jt - *iter);
	std::cout<<"min: "<<min<<std::endl;
	return(min);

}

int Span::longestSpan()
{
	int max = 0;
	if (this->fill <= 1)
		throw(Span::NoSpanException());
	for (std::vector<int>::iterator iter = this->_array.begin(); iter != this->_array.end(); iter++)
		for (std::vector<int>::iterator jt = this->_array.begin(); jt < this->_array.end(); jt++)
			if (jt != iter && abs(*jt - *iter) > max)
				max = abs(*jt - *iter);
	std::cout<<"max: "<<max<<std::endl;
	return(max);

}

std::vector<int> & Span::getList(void){return(this->_array);};

Span::~Span()
{

}