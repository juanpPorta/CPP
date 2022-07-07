
#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal( void );
        WrongAnimal(std::string type);
        virtual ~WrongAnimal( void );
        WrongAnimal(const WrongAnimal &Wronganimal);
        WrongAnimal &operator =( const WrongAnimal &Wronganimal );

        virtual void makeSound( void )const;
        
        std::string getType() const;
        void setType(std::string type);
};