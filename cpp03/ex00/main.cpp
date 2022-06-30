/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:52:46 by jporta            #+#    #+#             */
/*   Updated: 2022/06/30 17:12:33 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("Juan");
	ClapTrap clap2(clap);
	clap.attack("antonio");
	clap.takeDamage(3);
	clap.beRepaired(5);
	return(0);
	
}