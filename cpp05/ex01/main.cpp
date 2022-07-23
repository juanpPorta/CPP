/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:39:42 by juan              #+#    #+#             */
/*   Updated: 2022/07/23 17:46:16 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    try
    {
        Bureaucrat *b = new Bureaucrat("Federico",47);
        Form *f = new Form("Paco",48,50);
        b->signForm(*f);
        std::cout << *b << *f << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}