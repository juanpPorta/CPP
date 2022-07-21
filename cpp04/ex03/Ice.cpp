#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    
}

Ice::~Ice( void )
{

}
Ice::Ice(const Ice &copy) : AMateria("Ice")
{

    this->type = copy.type;
}
Ice &Ice::operator =( const Ice &Ice )
{

    this->type = Ice.type;
    return (*this);
}

AMateria* Ice::clone() const{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "*shoots an Ice Bolt at " << target.getName()<<"*"<<std::endl;
}