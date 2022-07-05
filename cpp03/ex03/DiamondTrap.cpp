#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout<<"constructor DiamondTrap called"<<std::endl;	
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout<<"Destructor DiamondTrap called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout<<"Constructor DiamondTrap_name called"<<std::endl;
	DiamondTrap::name = name;
	ClapTrap::name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_atackDamage = FragTrap::_atackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout<<"operador DiamondTrap copia"<<std::endl;
	this->setName(copy.getName());
	this->setAttackDamage(copy.getAttackDamage());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setHitPoints(copy.getHitPoints());
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout<<"I'am ClapTrap "<<this->ClapTrap::getName()<<" and my DiamondTrap name is "<<this->name<<std::endl;
}