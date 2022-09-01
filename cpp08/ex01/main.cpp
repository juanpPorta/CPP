#include "span.hpp"

int main()
{
	try
	{

		Span sp = Span(5);
		Span sp2(10);
		sp.addNumber(10);
		sp.addNumber(8);
		sp.addNumber(14);
		sp.addNumber(16);
		std::vector<int>::iterator itb = sp.getList().begin();
		std::vector<int>::iterator ite = sp.getList().end();
		sp2.addNumber(itb, ite);
		sp.addNumber(4);
		for (std::vector<int>::iterator it = sp.getList().begin(); it != sp.getList().end(); it++)
			std::cout<<*it<<std::endl;
		sp.shortestSpan();
		sp.longestSpan();

	}catch(const std::exception& e)
	{
		std::cerr << e.what()<<std::endl;	
	}
}