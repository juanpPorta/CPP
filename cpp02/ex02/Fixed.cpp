/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:42:12 by jporta            #+#    #+#             */
/*   Updated: 2022/09/07 16:48:45 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed() //forma de poner ppor defecto un valor
{
	this->num = 0;
}

Fixed::~Fixed()
{

}

Fixed &Fixed::operator=(const Fixed& fraction)
{
	if (this == &fraction)
		return(*this);
	this->num = fraction.getRawBits();
	return(*this);
}

Fixed::Fixed(const Fixed &copy)
{
	this->num = copy.getRawBits();
}

void Fixed::setRawBits( int const raw )
{
	this->num = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->num);
}

Fixed::Fixed(int const value)
{
	this->num = value << this->nb;
}

Fixed::Fixed(const float value)
{
	this->num = (static_cast<int>(roundf(value * (1 << this->nb))));
}

float Fixed::toFloat( void ) const
{
	return(static_cast<float> (num / static_cast<float>(1 << this->nb)));
}

int Fixed::toInt( void ) const
{
	return(static_cast<int> (num / (1 << this->nb)));
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fixe)
{
	out << Fixe.toFloat();
	return out;
}

//operadores 
Fixed Fixed::operator ++ ( int )
{
	Fixed pre = *this;
	this->setRawBits(this->getRawBits() + 1);
	return pre;
}

Fixed &Fixed::operator ++ ( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator -- ( int )
{
	Fixed pre = *this;
	this->setRawBits(this->getRawBits() - 1);
	return pre;
}

Fixed &Fixed::operator -- ( void )
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator - (const Fixed &fraction)
{
	Fixed val;
	float retval;
	retval = fraction.num - this->num;
	val = Fixed(retval);
	return retval;
}

Fixed Fixed::operator + (const Fixed &fraction)
{
	Fixed val;
	float retval;
	retval = fraction.num + this->num;
	val = Fixed(retval);
	return retval;
}

Fixed Fixed::operator * (const Fixed &fraction)
{

	Fixed *val = new Fixed(fraction.toFloat() * this->toFloat());
	return *val;
}

Fixed Fixed::operator / (const Fixed &fraction)
{
	Fixed *val = new Fixed(fraction.toFloat() / this->toFloat());
	return *val;
}

bool Fixed::operator > (const Fixed &fraction)
{
	if (fraction.num > this->num)
		return(true);
	else
		return(false);
}

bool Fixed::operator >= (const Fixed &fraction)
{
	if (fraction.num >= this->num)
		return(true);
	else
		return(false);
}

bool Fixed::operator < (const Fixed &fraction)
{
	if (fraction.num < this->num)
		return(true);
	else
		return(false);
}

bool Fixed::operator <= (const Fixed &fraction)
{
	if (fraction.num <= this->num)
		return(true);
	else
		return(false);
}

bool Fixed::operator != (const Fixed &fraction)
{
	if (fraction.num != this->num)
		return(true);
	else
		return(false);
}

bool Fixed::operator == (const Fixed &fraction)
{
	if (fraction.num == this->num)
		return(true);
	else
		return(false);
}

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1.num < fix2.num)
		return fix1;
	else
		return fix2;
}

const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1.num < fix2.num)
		return fix1;
	else
		return fix2;
}

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1.num > fix2.num)
		return fix1;
	else
		return fix2;
}

const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1.num > fix2.num)
		return fix1;
	else
		return fix2;
}