#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, 145, 137), target(target)
{
    std::cout<<" *Constructor of Shrubbery* "<<std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<" *Destructor Shrubbery called* "<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    std::cout<<" *Copy constructor Shrubbery called* "<<std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op)
{
    std::cout<<" *Assignation operator Shrubbery called* "<<std::endl;
    if (this != &op)
    {
        this->target = op.target;
        this->Form::operator=(op);
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getisSigned() == false)
        throw Form::gradeTooLowException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::gradeTooHighException();
    std::ofstream file;
    file.open((this->target + "_shrubbery").c_str());
    file << "┈╱╲┈┈┈╱╲┈┈┈╱╲┈┈"<< std::endl;
    file << "╱╯╰╲┈┈╳╳┈┈╱╯╰╲┈"<< std::endl;
    file << "╯╯╰╰╲╱╮╰╲╱╯╯╰╰╲"<< std::endl;
    file << "╯╯╰╰╱╰╯╭╮╲╯╯╰╰╰"<< std::endl;
    file << "╯╯╰╱╯╭╮╰╯╭╲╯╰╰╰"<< std::endl;
    file << "▔▋╱╭╮╰╯╭╮╰╯╲▋▔▔"<< std::endl;
    file << "┈╱╮╰╯╭╮╰╯╭╮╰╲┈┈"<< std::endl;
    file << "┈▔▔▔▔▔▔▋▔▔▔▔▔┈┈"<< std::endl;
    file << "┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈"<< std::endl;
    file.close();  
    std::cout<<" *Shrubbery creation form executed* "<<std::endl;  

}