#include <string>
#include "Conversion.hpp"

int main()
{

	std::string Frase = "H";
	Conversion *pepe1 = new Conversion(Frase);
	
	delete pepe1;
	return(0);
}