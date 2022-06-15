/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:36:57 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 19:07:34 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << " *HumanoB spawnea* "<<std::endl;
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout<<this->_name<<" attacks whit his " << this->_weapon->GetType()<<std::endl;
	else 
		std::cout<<this->_name<<" HAS NO WEAPON"<<std::endl;
}