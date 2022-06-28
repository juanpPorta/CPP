#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

class Fixed{
    private:
    
    public:
        Fixed(); // constructor
        Fixed(const Fixed&); // copy constructor
        ~Fixed(); // destructor
        Fixed &operator=(const Fixed& fraction); // assignment operator
};