/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:52:46 by jporta            #+#    #+#             */
/*   Updated: 2022/07/05 15:43:59 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main(void)
{
	ClapTrap clap("Juan");
	ScavTrap clap2("Juan2");

	std::cout<< clap.getEnergyPoints()<<std::endl;
	std::cout<< clap2.getEnergyPoints()<<std::endl;
	clap.attack("antonio");
	clap2.attack("antonio");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap2.guardGate();
	return(0);
	
}