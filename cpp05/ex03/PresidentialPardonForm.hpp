#pragma once
#include "Form.hpp"
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include <exception>
#include <stdlib.h>

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm(const std::string target);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &op);
        void	execute(Bureaucrat const &executor) const;
};