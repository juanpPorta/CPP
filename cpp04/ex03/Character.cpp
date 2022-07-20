#include "Character.hpp"

Character::Character() : name(""), nequip(0)
{
	inventory[0] = NULL;
	inventory[1] = NULL;	
	inventory[2] = NULL;	
	inventory[3] = NULL;
}

Character::Character(std::string name) : nequip(0)
{
	inventory[0] = NULL;
	inventory[1] = NULL;	
	inventory[2] = NULL;	
	inventory[3] = NULL;
	this->name = name;
}

Character::~Character()
{
	std::cout<<"calls destructor Character"<<std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character &Character::operator=(const Character &as)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = as.inventory[i];
	this->name = name;
	return(*this);
}

Character::Character(const Character &copy)
{
	for (int i = 0; i< 4; i++)
		this->inventory[i] = copy.inventory[i];
	this->name = copy.name;
}

std::string const &Character::getName() const
{
	return this->name;
}
void Character::equip(AMateria* m)
{
	if (this->nequip < 4)
	{
		this->inventory[this->nequip] = m;
		this->nequip++;
	}
	else 
		std::cout<<"u dont have more space, unequip any materia"<<std::endl;
}

void Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if(inventory[idx])
		this->inventory[idx]->use(target);
}

void Character::setName(std::string name)
{
	this->name = name;
}