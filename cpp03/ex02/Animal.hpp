
#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal( void );
        Animal(std::string type);
        virtual ~Animal( void );
        Animal(const Animal &animal);
        Animal &operator =( const Animal &animal );

        virtual void makeSound( void )const = 0;
        
        std::string getType() const;
        void setType(std::string type);
};