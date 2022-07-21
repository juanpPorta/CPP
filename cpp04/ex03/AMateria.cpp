#include "AMateria.hpp"

AMateria::AMateria()
{
}
AMateria::AMateria(const AMateria &copy)
{
	this->type = copy.type;
}
AMateria::~AMateria()
{
	
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