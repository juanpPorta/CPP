#pragma once
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        std::string const name;
        bool sign;
        int const grade_to_sign;
        int const grade_to_execute;
    public:
        Form();
        Form(const std::string name, int gradeSigned, int gradeExec);
        virtual ~Form();
        Form(const Form &copy);
        Form &operator=(const Form &os);

        int beSigned(const Bureaucrat &);
        virtual void	execute(Bureaucrat const &executor) const = 0;
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
        class formNotSignedException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        bool getisSigned() const;
        void setIsSigned(bool isSigned);

        std::string getName() const;

        int getGradeToSign() const;
        int getGradeToExecute() const;


};

std::ostream &operator<<(std::ostream &os, const Form &form);