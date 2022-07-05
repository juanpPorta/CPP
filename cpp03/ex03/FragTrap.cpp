/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:26:16 by jporta            #+#    #+#             */
/*   Updated: 2022/07/05 18:38:54 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout<<"constructor FragTrap called"<<std::endl;	
}

FragTrap::~FragTrap(void)
{
	std::cout<<"Destructor FragTrap called"<<std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout<<"Constructor FragTrap_name called"<<std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout<<"operador FragTrap copia"<<std::endl;
	this->setName(copy.getName());
	this->setAttackDamage(copy.getAttackDamage());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setHitPoints(copy.getHitPoints());
}

void FragTrap::attack(std::string const &target)
{
	std::cout<<"FragTrap " << this->name << " attack " << 	target << ", causing " << this->_atackDamage << " points of damage! "<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout<<"FragTrap That's the five good guys"<<std::endl;
}
