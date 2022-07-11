#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"llamada al constructor de Brains"<<std::endl;
}

Brain::~Brain()
{
	std::cout<<"llamada al Destructor de Brains"<<std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout<<"llamada al operador Asignacion de Brains"<<std::endl;
	this->SetIdeas(brain.GetIdeas());
	return (*this);
}
Brain::Brain(const Brain &copy)
{
	std::cout<<"llamada al Constructor copia de Brains"<<std::endl;
	this->SetIdeas(copy.GetIdeas());
}
void Brain::SetIdeas(const std::string *ideas)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas[i];
	}
}
const std::string *Brain::GetIdeas() const
{
	return(this->ideas);
}