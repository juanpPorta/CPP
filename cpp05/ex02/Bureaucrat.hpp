#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        virtual ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &other);
        class gradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class gradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        void incrementGrade();
        void signForm( Form &f);
        void decrementGrade();
        std::string getName() const;
        int getGrade() const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);