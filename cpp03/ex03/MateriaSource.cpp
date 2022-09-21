#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : nmaterias(0)
{
    for (size_t i = 0; i < 4; i++)
		  inventory[i] = NULL;

}

MateriaSource::~MateriaSource( void )
{
    for (size_t i = 0; i < 4; i++)
		  delete inventory[i];

}
MateriaSource::MateriaSource(const MateriaSource &copy)
{
    int i = 0;

  while (i < 4)
  {
      this->inventory[i] = copy.inventory[i]->clone();
     i++;
  }
    this->nmaterias = copy.nmaterias;
}

MateriaSource &MateriaSource::operator =( const MateriaSource &materiasrc)
{
   int i = 0;

    while (i < 4)
    {
      delete this->inventory[i];
      this->inventory[i] = materiasrc.inventory[i]->clone();
      i++;
    }
    return (*this);

}

void MateriaSource::learnMateria(AMateria *amateria)
{
  if(this->nmaterias < 4)
  {
		this->inventory[this->nmaterias] = amateria;
        this->nmaterias++;
  }
  else
		std::cout << "Materias is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < this->nmaterias; i++)
    {
      if (inventory[i]->getType().compare(type) == 0)
        return (inventory[i]->clone());
    }
	return 0;

}