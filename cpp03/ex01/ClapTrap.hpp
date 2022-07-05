

#pragma once

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

class ClapTrap
{
	private:
		std::string _name;
		int _hitpoints;
		int _energyPoints;
		int _atackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		~ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &ct);

		std::string getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;

		void setName(std::string name);
		void setHitPoints(int hitpoints);
		void setEnergyPoints (int energy);
		void setAttackDamage (int attack);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};