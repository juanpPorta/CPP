/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:59:07 by jporta            #+#    #+#             */
/*   Updated: 2022/07/05 17:56:10 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout<<"constructor ScavTrap called"<<std::endl;	
}

ScavTrap::~ScavTrap(void)
{
	std::cout<<"Destructor ScavTrap called"<<std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout<<"Constructor ScavTrap _name called"<<std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout<<"operador ScavTrap copia"<<std::endl;
	this->setName(copy.getName());
	this->setAttackDamage(copy.getAttackDamage());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setHitPoints(copy.getHitPoints());
}

void ScavTrap::attack(std::string const &target)
{
	std::cout<<"ScavTrap " << this->name << " attack " << 	target << ", causing " << this->_atackDamage << " points of damage! "<<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap have enterred in Gate keeper mode"<<std::endl;
}
