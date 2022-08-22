
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <array>
#include "easyfind.hpp"

int main()
{
	std::vector<int> numeros;
	std::list<int> lista;
	std::array<int, 5> a = {1,2,3, 10, 20};
	// // Se agregan al final con push_back
	// numeros.push_back(50);
	// numeros.push_back(70);
	// numeros.push_back(80);
	// numeros.push_back(100);
	// // Imprimirlos para ver contenido
	// std::cout << "Imprimiendo" << std::endl;
	// for (std::size_t i = 0; i < numeros.size(); i++) {
	// 	std::cout << numeros[i] << std::endl;
	// }

	// std::cout<<"a"<<*(numeros.begin() + 1)<<std::endl;
	// std::cout<<*(numeros.begin() + 2)<<std::endl;
	// std::cout<<"end "<<*(numeros.end())<<std::endl;
	// std::cout<<*(numeros.end()-1)<<std::endl;
	// std::cout<<*(numeros.end()-2)<<std::endl;
	// std::cout<<*(numeros.end()-3)<<std::endl;

	lista.push_front(10);
	numeros.push_back(50);
	numeros.push_back(70);
	numeros.push_back(80);
	numeros.push_back(100);
	easyfind(lista, 10);
	easyfind(numeros, 70);
	easyfind(a, 10);



    
}
