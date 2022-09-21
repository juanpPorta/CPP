#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
Cat::Cat() : Animal("Cat")
{
    std::cout<<"llamada al constructor de Cat"<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"llamada al destructor de Cat"<<std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout<<"llamada al operador de asignacion de Cat"<<std::endl;
    this->setType(cat.getType());
    return (*this);
}

Cat::Cat(const Cat& copy) : Animal("animal")
{
    this->setType(copy.getType());
}

void Cat::makeSound( void ) const
{
    std::cout << "Miauuuuuuu!!!" << std::endl;
}