#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout<<"Default constructor called"<<std::endl;
}

Intern::Intern(const Intern &copy)
{
    (void) copy;
}

Intern &Intern::operator=(const Intern &op)
{
    (void) op;
    return *this;
}

Intern::~Intern(void)
{
    std::cout<<"Default destructor called"<<std::endl;
}

Form*	Intern::ShrubberyForm(std::string targetForm)
{
	ShrubberyCreationForm *form = new ShrubberyCreationForm(targetForm);
	return (form);
}

Form*	Intern::RobotomyForm(std::string targetForm)
{
	RobotomyRequestForm	*form = new RobotomyRequestForm(targetForm);
	return (form);
}

const char*    Intern::nullFormException::what() const throw()
{
    return ("Form not found");
}

Form *Intern::PresidentialForm(std::string targetForm)
{
    PresidentialPardonForm *form = new PresidentialPardonForm(targetForm);
    return (form);
}

Form *Intern::makeForm(std::string name, std::string targetForm)
{
    std::string obj[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form* (Intern::*ptrform[])(std::string target) = {&Intern::ShrubberyForm, &Intern::RobotomyForm, &Intern::PresidentialForm};
    int w = 0;
    while (w < 3)
    {
        if (name == obj[w])
        {
            std::cout<<"Intern creates a "<<name<<" form"<<std::endl;
            return ((this->*ptrform[w])(targetForm));
        }
        w++;
    }
    throw Intern::nullFormException();
}

