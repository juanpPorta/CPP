#pragma once

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        ~WrongDog();
        WrongDog (const WrongDog &copy);
        WrongDog& operator=(const WrongDog&);
        void makeSound( void ) const;
};
