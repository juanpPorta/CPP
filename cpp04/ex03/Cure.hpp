#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure( void );
        Cure(const Cure &copy);
        ~Cure( void );
        Cure &operator =( const Cure &cure );
        AMateria* clone() const;
        void use(ICharacter& target);
    
};