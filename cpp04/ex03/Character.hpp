#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "AMateria.hpp"

class AMateria;

class Character
{
	private:
		std::string name;
		AMateria* inventory[4];
		int unequip;
	public:
		Character();
		Character(std::string name);
		~Character();
		Character &operator=(const Character &as);
		Character(const Character &copy);
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
        void setName(std::string name);
};
