/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:57:36 by juan              #+#    #+#             */
/*   Updated: 2022/07/23 19:52:45 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), sign(false), grade_to_sign(0), grade_to_execute(0) 
{
    std::cout << "llamada al constructor default" << std::endl;
}

Form::Form(const std::string name, int gradeSigned, int gradeExec) : name(name), sign(false), grade_to_sign(gradeSigned), grade_to_execute(gradeExec)
{
    if (gradeSigned < 1 || gradeExec < 1)
        throw Form::gradeTooLowException();
    if (gradeSigned > 150 || gradeExec > 150)
        throw Form::gradeTooHighException();
    else
      std::cout<<"Form created"<<std::endl;  
}

Form::~Form()
{
    std::cout<<"Form destroyed"<<std::endl;
}

Form::Form (const Form &copy) : name(copy.name), sign(copy.sign), grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute)
{
    std::cout<<"Form copied"<<std::endl;
}

Form &Form::operator=(const Form &op)
{
    std::cout << "Form Assigment operator called" << std::endl;
    this->sign = op.getisSigned();
    return (*this);
}

int Form::beSigned(const Bureaucrat &b)
{
    if(b.getGrade() > this->getGradeToSign())
    {
        throw Form::gradeTooLowException();
        return (1);
    }
    else
    {
        this->setIsSigned(true);
        return (0);
    }
        
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "Form " << form.getName() << " is " << (form.getisSigned() ? "signed" : "not signed") << " and has a grade to sign of " << form.getGradeToSign() << " and a grade to execute of " << form.getGradeToExecute() << std::endl;
    return (os);
}

const char* Form::gradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Form::gradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

bool Form::getisSigned() const
{
    return (this->sign);
}

int Form::getGradeToSign() const
{
    return (this->grade_to_sign);
}

int Form::getGradeToExecute() const
{
    return (this->grade_to_execute);
}

std::string Form::getName() const
{
    return (this->name);
}

void Form::setIsSigned(bool isSigned)
{
    this->sign = isSigned;
}

