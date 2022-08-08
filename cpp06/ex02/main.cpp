
#include "main.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

Base::~Base()
{

}

Base *generate(void)
{
	int num = 0;
	srand(time(NULL));
	num = rand() % 3;
	std::cout<<"numero: "<<num<<std::endl;
	Base *w = NULL;

	if (num == 0)
		w = new A();
	else if(num == 1)
		w = new B();
	else if(num == 2)
		w = new C();
	return(w);
}

void identify(Base *p)
{
	if (p == dynamic_cast<A*>(p))
		std::cout<<"A"<<std::endl;
	else if (p == dynamic_cast<B*>(p))
		std::cout<<"B"<<std::endl;
	else if (p == dynamic_cast<C*>(p))
		std::cout<<"C"<<std::endl;
}

int main(void)
{
	Base *ptr;
	ptr = generate();
	identify(ptr);
	return(0);
}