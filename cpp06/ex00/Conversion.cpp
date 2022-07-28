
#include "Conversion.hpp"

// float Conversion::toFloat( void ) const
// {
// 	return(static_cast<float> (num / static_cast<float>(1 << this->nb)));
// }

// int Conversion::toInt( void ) const
// {
// 	return(static_cast<int> (num / (1 << this->nb)));
// }
Conversion::Conversion(std::string Frase) : Conver(Frase)
{
	Linea = this->toChar(Frase);
}

Conversion::~Conversion()
{

}

Conversion &Conversion::operator=(const Conversion &as)
{
	this->Conver = as.Conver;
	return(*this);
}

Conversion::Conversion(const Conversion &copy)
{
	this->Conver = copy.Conver;
}

char Conversion::toChar(std::string Frase)
{
	if ((sizeof(Frase)/sizeof(Frase)) > 2)
		std::cout<<"No Displayable"<<std::endl;
	else
		
	return (this->Linea);
}
