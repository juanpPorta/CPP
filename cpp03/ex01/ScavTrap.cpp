/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:59:07 by jporta            #+#    #+#             */
/*   Updated: 2022/07/05 15:42:25 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout<<"constructor ScavTrap called"<<std::endl;	
}

ScavTrap::~ScavTrap()
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
	this->_name = copy._name;
	this->_atackDamage =copy._atackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_hitpoints = copy._hitpoints;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ct)
{
	std::cout<<"Operador ScavTrap asignacion"<<std::endl;
	if (&ct == this)
		return(*this);
	this->_name = ct._name;
	this->_atackDamage = ct._atackDamage;
	this->_energyPoints = ct._energyPoints;
	this->_hitpoints = ct._hitpoints;
	return(*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout<<"ScavTrap " << this->_name << " attack " << 	target << ", causing " << this->_atackDamage << " points of damage! "<<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap have enterred in Gate keeper mode"<<std::endl;
}
