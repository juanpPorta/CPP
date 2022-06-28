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
        Fixed(int const value);
        Fixed(const float value);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(const Fixed& fraction); // assignment operator
        int getRawBits( void ) const;
        void setRawBits ( int const raw );
        Fixed &operator<<(const Fixed& fraction); // assignment operator

};

std::ostream &operator<<(std::ostream &out, const Fixed &Fixe);