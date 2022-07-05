/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:52:46 by jporta            #+#    #+#             */
/*   Updated: 2022/07/05 17:32:25 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	{
		ScavTrap sc4vtp("sc4vtp");
		sc4vtp.attack("Handsome Jack");
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.guardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(17);
	}
	{
		FragTrap Fr4gtp("Fr4gtp");
		Fr4gtp.attack("Handsome Jack");
		Fr4gtp.takeDamage(6);
		Fr4gtp.beRepaired(4);
		Fr4gtp.takeDamage(3);
		Fr4gtp.highFivesGuys();
		Fr4gtp.beRepaired(8);
		Fr4gtp.takeDamage(17);
	}
	{
		ClapTrap cl4ptp("cl4ptp");
		cl4ptp.attack("Handsome Jack");
		cl4ptp.takeDamage(6);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(3);
		cl4ptp.beRepaired(8);
		cl4ptp.takeDamage(17);
	}
}