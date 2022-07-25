/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:39:42 by juan              #+#    #+#             */
/*   Updated: 2022/07/25 19:20:10 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "shrubberyCreationForm.hpp"
#include "robotomyRequestForm.hpp"
#include "presidentialPardonForm.hpp"
int main()
{
	try
	{
		Bureaucrat	bureaucrat("Fernando", 1);
		RobotomyRequestForm	form("Roboto");
		ShrubberyCreationForm form2("stuf");
		PresidentialPardonForm form3("guano");

		std::cout << std::endl << std::endl << std::endl;

		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
		std::cout << std::endl;

		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << std::endl;

		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);

		std::cout << std::endl << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
    
}