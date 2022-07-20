#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout<<"Llamada a AMateria constrcutor"<<std::endl;
}
AMateria::AMateria(const AMateria &copy)
{
	this->type = copy.type;
}
AMateria::~AMateria()
{
	std::cout<<"Llamada a AMateria Destructor"<<std::endl;
}
AMateria &AMateria::operator=(const AMateria &amateria)
{
	this->type = amateria.type;
	return(*this);
}
AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const &AMateria::getType() const
{
	return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout<<"use the materia"<<std::endl;
	target.getName();
}