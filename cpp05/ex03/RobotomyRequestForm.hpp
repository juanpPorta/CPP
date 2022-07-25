#pragma once
#include "Form.hpp"
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include <exception>
#include <stdlib.h>

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(const std::string target);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &op);
        void	execute(Bureaucrat const &executor) const;
};