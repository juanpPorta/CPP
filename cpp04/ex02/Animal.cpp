
#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Animal Constructor main called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal Constructor called" << std::endl;
    this->setType(type);
}
Animal::~Animal( void )
{
    std::cout << "Destructor Animal called" << std::endl;
}
Animal::Animal(const Animal &copy)
{
    std::cout << "Copy Constructor Animal called" << std::endl;
    this->type = copy.type;
}
Animal &Animal::operator =( const Animal &animal )
{
    std::cout << "Assignation operator called" << std::endl;
    this->type = animal.type;
    return (*this);
}

void Animal::makeSound( void ) const
{
    std::cout << "Unrecgnizable Sounds" << std::endl;
}
    
std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}