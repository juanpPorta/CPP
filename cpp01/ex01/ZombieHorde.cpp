/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:16:13 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 17:46:26 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int n, std::string name)
{
	Zombie *zombiehorde;

	zombiehorde = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombiehorde[i].SetName(name + (char)(i + 49));
	return zombiehorde;
}
