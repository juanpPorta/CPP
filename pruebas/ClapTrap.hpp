

#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int _hitpoints;
		int _energyPoints;
		int _atackDamage;
		int _health;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &ct);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};