/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:39:42 by juan              #+#    #+#             */
/*   Updated: 2022/07/25 21:25:43 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat *b = new Bureaucrat("Federico",2);
        b->incrementGrade();
        std::cout << *b;
        b->incrementGrade();
        std::cout << *b;
        b->decrementGrade();
        std::cout << *b;
        delete b;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}