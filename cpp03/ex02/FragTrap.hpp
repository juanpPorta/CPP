#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap(void);
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &ct);
		void attack(std::string const &target);
		void highFivesGuys(void);
};