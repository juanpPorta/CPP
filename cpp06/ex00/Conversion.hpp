#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include <stdio.h>
#include <ctype.h>
class Conversion
{
	private:
		std::string Conver;
		char Linea;
		// int Integer;
		// float Float;
		// double Doble;
	public:
		Conversion(std::string Frase);
		~Conversion();
		Conversion &operator=(const Conversion &as);
		Conversion (const Conversion &copy);
		//methods
		char toChar(std::string Frase);
		// float toFloat( void ) const;
		// double todouble(void) const;
		// int toInt( void ) const;


};