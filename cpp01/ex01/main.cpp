/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:07:42 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 17:47:08 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = ZombieHorde(5, "bernardo");
	for (int i = 0;i < 5; i++)
		zombie[i].announce();
	delete[] zombie;
	return(0);
}