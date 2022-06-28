/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:42:12 by jporta            #+#    #+#             */
/*   Updated: 2022/06/28 18:27:31 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed() //forma de poner ppor defecto un valor
{
	std::cout << "llamada al constructor default" << std::endl;
	this->num = 0;
}

Fixed::~Fixed()
{
	std::cout << "llamada al destructor" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& fraction)
{
	std::cout<<"asignator called"<<std::endl;
	if (this == &fraction)
		return(*this);
	this->num = fraction.getRawBits();
	return(*this);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "copy constructor"<< std::endl;
	this->num = copy.getRawBits();
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawbits called"<< std::endl;
	this->num = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawbits called"<< std::endl;
	return (this->num);
}

Fixed::Fixed(int const value)
{
	std::cout<<"constructor de int called"<<std::endl;
	this->num = value << this->nb;
}

Fixed::Fixed(const float value)
{
	std::cout<<"constructor flotante called"<<std::endl;
	this->num = (static_cast<int>(roundf(value * (1 << this->nb))));
}

float Fixed::toFloat( void ) const
{
	std::cout<<"calling toFloat"<<std::endl;
	return(static_cast<float> (num / static_cast<float>(1 << this->nb)));
}

int Fixed::toInt( void ) const
{
	std::cout<<"calling toInt"<<std::endl;
	return(static_cast<int> (num / (1 << this->nb)));
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fixe)
{
	
	std::cout<<"calling operator overpower"<<std::endl;
	out << Fixe.toFloat();
	return out;
}