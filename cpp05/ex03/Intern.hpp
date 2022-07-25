#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "shrubberyCreationForm.hpp"
#include "robotomyRequestForm.hpp"
#include "presidentialPardonForm.hpp"
#include <string>
#include <ostream>

class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &op);
        Form *ShrubberyForm(std::string target);
        Form *RobotomyForm(std::string target);
        Form *PresidentialForm(std::string target);
        Form *makeForm(std::string name, std::string target);
        class nullFormException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        ~Intern();
};