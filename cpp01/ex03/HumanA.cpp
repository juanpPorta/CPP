/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:37:14 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 19:07:29 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << " *HumanoA spawnea* "<<std::endl;
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout<<this->_name<<" attacks whit his " << this->_weapon.GetType()<<std::endl;
}