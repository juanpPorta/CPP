/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:56:03 by juan              #+#    #+#             */
/*   Updated: 2022/07/23 17:44:32 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::gradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::gradeTooLowException();
    else
        std::cout << "Bureaucrat " << name << " constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{
    std::cout << "Bureaucrat " << name << " constructed" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << name << " destructed" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Bureaucrat " << name << " assigned" << std::endl;
    this->grade = other.getGrade();
    return *this;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
        throw Bureaucrat::gradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
        throw Bureaucrat::gradeTooLowException();
    else
        grade++;
}

const char*Bureaucrat::gradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char* Bureaucrat::gradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

std::string Bureaucrat::getName() const
{
    return name;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}

 void Bureaucrat::signForm( Form &f)
 {
    try
    {
        f.beSigned(*this);
        std::cout<<"Form "<< f.getName()<<" signed by "<<this->getName()<<std::endl;
    }
    catch (std::exception &e)
    {
        std::cout<<this->getName()<<" cannot sign "<<f.getName()<<"because"<<e.what()<<std::endl;
        
    }
 }