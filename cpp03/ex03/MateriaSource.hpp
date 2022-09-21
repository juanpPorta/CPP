#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* inventory[4];
		int nmaterias;
	public:
		MateriaSource();
		~MateriaSource();
		
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &materiasource );
		void learnMateria(AMateria *materia);
		AMateria *createMateria(std::string const &type);
};