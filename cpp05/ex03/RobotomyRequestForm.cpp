#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(target, 72, 45), target(target)
{
    std::cout<<" *Constructor of Robot* "<<std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout<<" *Destructor Robot called* "<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    std::cout<<" *Copy constructor Robot called* "<<std::endl;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op)
{
    std::cout<<" *Assignation operator Robot called* "<<std::endl;
    if (this != &op)
    {
        this->target = op.target;
        this->Form::operator=(op);
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    int num = rand();
    if (this->getisSigned() == false)
        throw Form::gradeTooLowException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::gradeTooHighException();
    if (num >= 50)
        std::cout<<this->target<<" *has been romotomized* "<<std::endl;
    else
        std::cout<<"*Robotomy failed*"<<std::endl;
}