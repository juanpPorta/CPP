
#include <string>
#include <math.h>
#include <iostream>



void toChar(double numWord)
{
	char charo;
	charo = static_cast<char>(numWord);
	if (charo >= 32 && charo <= 126)
		std::cout<<"char: "<<charo<<std::endl;
	else if (charo != numWord)
		std::cout<<"char: Impossible"<<std::endl;
	else
		std::cout<<"char: No Displayable"<<std::endl;
}

void toInt(double numWord)
{
	int number;

	number = static_cast<int>(numWord);
	if(number != numWord)
		std::cout<<"int: Imposible"<<std::endl;
	else
		std::cout<<"int: "<<number<<std::endl;
}

void toFloat(double numWord)
{
	float number;
	number = static_cast<float>(numWord);
	if (roundf(number) != numWord || number < -999999 || number > 999999)
		std::cout<<"float: "<<number<<"f"<<std::endl;
	else 
		std::cout<<"float: "<<number<<".0f"<<std::endl;
}

void todouble(double numWord)
{
	if (numWord != numWord || numWord < -999999 || numWord > 999999)
		std::cout<<"double: "<<numWord<<std::endl;
	else
		std::cout<<"double: "<<numWord<<".0"<<std::endl;

}

int main(int argc, char**argv)
{
	std::string Num;
	double numWord;


	if (argc != 2)
	{
		std::cout<<"numero de argumentos no valido"<<std::endl;
		return(0);
	}
	Num = argv[1];
	try{

		if (Num == "+inff")
			numWord = 1.0 / 0.0;
		else if(Num == "-inff")
			numWord = -1.0 / 0.0;
		else if (Num == "nanf")
			numWord = 0.0 / 0.0;
		else
			numWord = std::stod(Num);
		toChar(numWord);
		toInt(numWord);
		toFloat(numWord);
		todouble(numWord);
	}catch(const std::exception &e){
		std::cerr<<e.what()<<std::endl;
	}
	return(0);
}