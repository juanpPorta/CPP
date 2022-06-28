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
        //operators
        Fixed operator ++ ( int );
        Fixed &operator ++ ( void );
        Fixed operator -- (int);
        Fixed &operator -- (void);

        Fixed operator << (const Fixed& fraction); // assignment operator
        Fixed operator + ( const Fixed &fraction );
        Fixed operator - ( const Fixed &fraction );
        Fixed operator * (const Fixed &fraction);
        Fixed operator / (const Fixed &fraction);
    
        bool operator > (const Fixed &fraction); 
        bool operator < (const Fixed &fraction);
        bool operator >= (const Fixed &fraction);
        bool operator <= (const Fixed &fraction);
        bool operator != (const Fixed &fraction);
        bool operator == (const Fixed &fraction);
        static Fixed &min(Fixed &fix1, Fixed &fix2);
        static const  Fixed &min(const Fixed &fix1, const Fixed &fix2);
        static Fixed &max(Fixed &fix1, Fixed &fix2);
        static const  Fixed &max(const Fixed &fix1, const Fixed &fix2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &Fixe);