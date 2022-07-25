#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form(target, 25, 5), target(target)
{
    std::cout<<" *Constructor of President* "<<std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout<<" *DestructorPresident called* "<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    std::cout<<" *Copy constructorPresident called* "<<std::endl;
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &op)
{
    std::cout<<" *Assignation operatorPresident called* "<<std::endl;
    if (this != &op)
    {
        this->target = op.target;
        this->Form::operator=(op);
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getisSigned() == false)
        throw Form::gradeTooLowException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::gradeTooHighException();
    std::cout<<this->target<<" *has been pardoned by Zafod Beeblebrox* "<<std::endl;
}