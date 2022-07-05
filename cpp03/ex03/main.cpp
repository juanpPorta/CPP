/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:52:46 by jporta            #+#    #+#             */
/*   Updated: 2022/07/05 18:30:52 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

// int main(void)
// {
// 	ClapTrap clap("Han solo");
// 	std::cout<<"-------------------------------------------------------"<<std::endl;
// 	ScavTrap clap2("Chewaka");
// 	std::cout<<"-------------------------------------------------------"<<std::endl;

// 	std::cout<< clap.getEnergyPoints()<<std::endl;
// 	std::cout<<"-------------------------------------------------------"<<std::endl;
// 	std::cout<< clap2.getEnergyPoints()<<std::endl;
// 	std::cout<<"-------------------------------------------------------"<<std::endl;
// 	clap.attack("Storm Trooper");
// 	std::cout<<"-------------------------------------------------------"<<std::endl;
// 	clap2.attack("Storm Trooper");
// 	std::cout<<"-------------------------------------------------------"<<std::endl;
// 	clap.takeDamage(3);
// 	std::cout<<"-------------------------------------------------------"<<std::endl;
// 	clap.beRepaired(5);
// 	std::cout<<"-------------------------------------------------------"<<std::endl;
// 	clap2.guardGate();
// 	std::cout<<"-------------------------------------------------------"<<std::endl;
// 	return(0);
	
// }

int	main( void )
{
	ClapTrap clap("juan");
	std::cout<<"-------------------------------------------------------"<<std::endl;
	// ScavTrap clap2("juan2");
	// std::cout<<"-------------------------------------------------------"<<std::endl;
	// FragTrap clap3("juan3");
	std::cout<<"-------------------------------------------------------"<<std::endl;
	DiamondTrap clap4("juan4");
	std::cout<<"-------------------------------------------------------"<<std::endl;

	clap.attack("antonio");
	std::cout<<"-------------------------------------------------------"<<std::endl;
	clap4.attack("antonio");
	std::cout<<"-------------------------------------------------------"<<std::endl;
	clap.takeDamage(3);
	std::cout<<"-------------------------------------------------------"<<std::endl;
	clap.beRepaired(5);
	std::cout<<"-------------------------------------------------------"<<std::endl;
	clap4.guardGate();
	std::cout<<"-------------------------------------------------------"<<std::endl;
	clap4.highFivesGuys();
	std::cout<<"-------------------------------------------------------"<<std::endl;
	clap4.whoAmI();
	std::cout<<"-------------------------------------------------------"<<std::endl;
	return(0);
}