/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:42:12 by jporta            #+#    #+#             */
/*   Updated: 2022/06/28 16:00:43 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(): num(0) //forma de poner ppor defecto un valor
{
	std::cout << "llamada al constructor default" << std::endl;
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