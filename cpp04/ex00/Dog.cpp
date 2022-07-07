#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout<<"llamada al constructor de Dog"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"llamada al destructor de Dog"<<std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout<<"llamada al operador de asignacion de Dog"<<std::endl;
    this->setType(dog.getType());
    return (*this);
}

Dog::Dog(const Dog &copy) : Animal("animal")
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->setType(copy.getType());
}

void Dog::makeSound( void ) const
{
    std::cout << "GUAUUUUUUU!!!" << std::endl;
}


