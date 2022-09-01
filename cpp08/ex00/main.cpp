
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <array>
#include <map>
#include "easyfind.hpp"

int main()
{
	std::vector<int> numeros;
	std::list<int> lista;
	std::array<int, 5> a = {1,2,3, 10, 20};

	lista.push_front(10);
	numeros.push_back(50);
	numeros.push_back(70);
	numeros.push_back(80);
	numeros.push_back(101);
	numeros.push_back(102);
	numeros.push_back(103);
	numeros.push_back(104);
	numeros.push_back(105);
	std::cout<<"end "<<*(numeros.end())<<std::endl;
	std::cout<<"aaaaa "<<numeros.size()<<std::endl;
	std::cout<<*(numeros.end()-2)<<std::endl;
	std::cout<<*(numeros.end()-3)<<std::endl;
	easyfind(lista, 10);
	easyfind(numeros, 70);
	easyfind(a, 10);




    
}
