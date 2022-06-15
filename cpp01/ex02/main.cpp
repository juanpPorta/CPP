/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:57:10 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 18:15:35 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HIS THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;
	std::cout<<&str<<std::endl;
	std::cout<<&stringREF<<std::endl;
	std::cout<<stringPTR<<std::endl;
	std::cout<<*stringPTR<<std::endl;
	std::cout<<stringREF<<std::endl;
}