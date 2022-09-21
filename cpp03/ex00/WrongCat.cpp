#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout<<"llamada al constructor de WrongCat"<<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"llamada al destructor de WrongCat"<<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat)
{
    std::cout<<"llamada al operador de asignacion de WrongCat"<<std::endl;
    this->setType(WrongCat.getType());
    return (*this);
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal("WrongAnimal")
{
    this->setType(copy.getType());
}

void WrongCat::makeSound( void ) const
{
    std::cout << "WrongMiauuuuuuu!!!" << std::endl;
}