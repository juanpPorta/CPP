#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout<<"llamada al constructor de Cat"<<std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout<<"llamada al destructor de Cat"<<std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout<<"llamada al operador de asignacion de Cat"<<std::endl;
    this->setType(cat.getType());
    delete this->brain;
    this->brain = new Brain();
    *this->brain = *cat.brain;
    return (*this);
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Copy Constructor Cat called" << std::endl;
    this->setType(copy.getType());
    this->brain = new Brain();
    *this->brain = *copy.brain;
}

void Cat::makeSound( void ) const
{
    std::cout << "Miauuuuuuu!!!" << std::endl;
}

Brain *Cat::GetBrain(void) const
{
    return (this->brain);
}

void Cat::SetBrain(Brain *Brain)
{
    this->brain = Brain;
}