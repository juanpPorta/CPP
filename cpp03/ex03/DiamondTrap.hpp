#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap &ct);
		void attack(std::string const &target);
		void whoAmI();
};