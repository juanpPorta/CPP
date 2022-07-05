#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string _name;
		int _hitpoints;
		int _energyPoints;
		int _atackDamage;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &ct);
		void attack(std::string const & target);
		void guardGate(void);
};