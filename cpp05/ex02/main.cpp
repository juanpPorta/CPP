/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:39:42 by juan              #+#    #+#             */
/*   Updated: 2022/07/23 19:55:00 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "shrubberyCreationForm.hpp"
int main()
{

    try
    {
        Bureaucrat *b = new Bureaucrat("Federico",149);
        Form *f = new Form("Paco", 149,149);
        ShrubberyCreationForm *s = new ShrubberyCreationForm("Paco");
        s->beSigned(*b);
        s->execute(*b);
        delete b;
        delete f;
        delete s;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}