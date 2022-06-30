/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:49:54 by jporta            #+#    #+#             */
/*   Updated: 2022/06/30 17:13:55 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"constructor called"<<std::endl;	
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name) :  _name(name), _hitpoints(10), _energyPoints(10), _atackDamage(3), _health(10)
{
	std::cout<<"Constructor _name called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout<<"operador copia"<<std::endl;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_atackDamage =copy._atackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_hitpoints = copy._hitpoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	std::cout<<"Operador asignacion"<<std::endl;
	if (&ct == this)
		return(*this);
	this->_name = ct._name;
	this->_health = ct._health;
	this->_atackDamage = ct._atackDamage;
	this->_energyPoints = ct._energyPoints;
	this->_hitpoints = ct._hitpoints;
	return(*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout<<"ClapTrap " << this->_name << " attack " << 	target << ", causing " << this->_atackDamage << " points of damage! "<<std::endl;
	this->_health = this->_health - this->_hitpoints;	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<"ClapTrap "<< this->_name << " takes "<< amount << " points of damage! "<<std::endl;
	if (this->_health > 0)
		std::cout<< this->_name<< " have "<<this->_health<<"health of points"<<std::endl;
	else
		std::cout<< this->_name<< "is death"<<std::endl;
		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout<<"ClapTrap "<<this->_name << " takes "<< amount << " points!"<<std::endl;
	
}

