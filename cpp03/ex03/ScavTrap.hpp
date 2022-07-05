#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:


	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &ct);
		void attack(std::string const &target);
		void guardGate(void);
};