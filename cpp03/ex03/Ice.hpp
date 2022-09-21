#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice( void );
        Ice(const Ice &copy);
        ~Ice( void );
        Ice &operator =( const Ice &Ice );
        AMateria* clone() const;
        void use(ICharacter& target);
    
};