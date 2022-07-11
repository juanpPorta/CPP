#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout<<"llamada al constructor de Dog"<<std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout<<"llamada al destructor de Dog"<<std::endl;
     delete brain;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout<<"llamada al operador de asignacion de Dog"<<std::endl;
    this->setType(dog.getType());
    delete this->brain;
    this->brain = new Brain();
    *this->brain = *dog.brain;
    return (*this);
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Copy Constructor Dog called" << std::endl;
    this->setType(copy.getType());
    this->brain = new Brain();
    *this->brain = *copy.brain;
}

void Dog::makeSound( void ) const
{
    std::cout << "GUAUUUUUUU!!!" << std::endl;
}

Brain *Dog::GetBrain(void) const
{
    return (this->brain);
}

void Dog::SetBrain(Brain *Brain)
{
    this->brain = Brain;
}
