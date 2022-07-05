#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:


	public:
		FragTrap(void);
		FragTrap(std::string name);
		virtual ~FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &ct);
		void attack(std::string const &target);
		void highFivesGuys(void);
};