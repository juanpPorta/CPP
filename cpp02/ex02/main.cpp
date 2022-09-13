/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:41:41 by jporta            #+#    #+#             */
/*   Updated: 2022/09/07 15:35:17 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int main( void )
{
	Fixed	a;
	
	Fixed b(Fixed(5.05f) * Fixed(2));
	Fixed c(Fixed(2.25f) + Fixed(2));
	Fixed d(Fixed(5.0f) / Fixed(2));
	Fixed e(Fixed(4) - Fixed(3.34f));
	
	std::cout  << std::endl;
	
	 std::cout << a << std::endl;
	 std::cout << ++a << std::endl;
	 std::cout << a << std::endl;
	 std::cout << a++ << std::endl;
	 std::cout << a << std::endl;
	 std::cout << b << std::endl;
	 std::cout << Fixed::max(a, b) << std::endl;

	std::cout  << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (e > d) << std::endl;
	std::cout << (c != a) << std::endl;
	std::cout << (b == d) << std::endl;
 	std::cout << Fixed::min(e, c) << std::endl;
}