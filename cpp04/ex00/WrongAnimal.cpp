
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    std::cout << "WrongAnimal Constructor main called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
    this->setType(type);
}
WrongAnimal::~WrongAnimal( void )
{
    std::cout << "Destructor main called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->type = copy.type;
}
WrongAnimal &WrongAnimal::operator =( const WrongAnimal &Wronganimal )
{
    std::cout << "Assignation operator called" << std::endl;
    this->type = Wronganimal.type;
    return (*this);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "Unrecgnizable Sounds" << std::endl;
}
    
std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}