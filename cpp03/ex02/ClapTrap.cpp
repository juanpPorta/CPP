/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:49:54 by jporta            #+#    #+#             */
/*   Updated: 2022/07/05 16:01:51 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"constructor ClapTrap called"<<std::endl;	
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor ClapTrap called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name) :  _name(name), _hitpoints(10), _energyPoints(10), _atackDamage(3)
{
	std::cout<<"Constructor ClapTrap _name called"<<std::endl;
}

std::string ClapTrap::getName(void) const
{
	return(this->_name);
}

int ClapTrap::getHitPoints(void) const
{
	return(this->_hitpoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return(this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return(this->_atackDamage);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(int hitpoints)
{
	this->_hitpoints = hitpoints;	
}

void ClapTrap::setEnergyPoints (int energy)
{
	this->_energyPoints = energy;
}

void ClapTrap::setAttackDamage (int attack)
{
	this->_atackDamage = attack;	
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout<<"operador copia"<<std::endl;
	this->setName(copy.getName());
	this->setAttackDamage(copy.getAttackDamage());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setHitPoints(copy.getHitPoints());
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	std::cout<<"Operador asignacion"<<std::endl;
	if (&ct == this)
		return(*this);
	this->setName(ct.getName());
	this->setAttackDamage(ct.getAttackDamage());
	this->setEnergyPoints(ct.getEnergyPoints());
	this->setHitPoints(ct.getHitPoints());
	return(*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout<<"ClapTrap " << this->_name << " attack " << 	target << ", causing " << this->_atackDamage << " points of damage! "<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<"ClapTrap "<< this->_name << " takes "<< amount << " points of damage! "<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout<<"ClapTrap "<<this->_name << " takes "<< amount << " points yea Be Repaired!"<<std::endl;
}

