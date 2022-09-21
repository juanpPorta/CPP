#include "Cure.hpp"


Cure::Cure( void ) : AMateria("cure")
{
    
}

Cure::~Cure( void )
{

}

Cure::Cure(const Cure &copy) : AMateria("Cure")
{
    this->type = copy.type;
}

Cure &Cure::operator =( const Cure &cure )
{

    this->type = cure.type;
    return (*this);
}

AMateria* Cure::clone() const{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "*heals " << target.getName() << "’s wounds*" <<  std::endl;
}