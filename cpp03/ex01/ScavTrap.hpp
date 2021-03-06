#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &ct);
		void attack(std::string const &target);
		void guardGate(void);
};