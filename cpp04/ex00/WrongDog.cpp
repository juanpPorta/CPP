#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongDog::WrongDog() : WrongAnimal("WrongDog")
{
    std::cout<<"llamada al constructor de WrongDog"<<std::endl;
}

WrongDog::~WrongDog()
{
    std::cout<<"llamada al destructor de WrongDog"<<std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &Wrongdog)
{
    std::cout<<"llamada al operador de asignacion de WrongDog"<<std::endl;
    this->setType(Wrongdog.getType());
    return (*this);
}

WrongDog::WrongDog(const WrongDog &copy) : WrongAnimal("Wronganimal")
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->setType(copy.getType());
}

void WrongDog::makeSound( void ) const
{
    std::cout << "WrongGUAUUUUUUU!!!" << std::endl;
}


