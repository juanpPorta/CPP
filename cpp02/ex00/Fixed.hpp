#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

class Fixed{
    private:
        int num;
        const static int nb = 8;
    public:
        Fixed(); // constructor
        Fixed(const Fixed &copy); // copy constructor
        ~Fixed(); // destructor
        Fixed &operator=(const Fixed& fraction); // assignment operator
        int getRawBits( void ) const;
        void setRawBits ( int const raw );
};