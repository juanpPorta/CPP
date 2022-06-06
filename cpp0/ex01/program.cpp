/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:16:29 by jporta            #+#    #+#             */
/*   Updated: 2022/06/06 20:17:55 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.hpp"


int ft_add(PhoneBook *agenda)
{
	int i = 7;
	int a = -1;
	int w = 0;
	while (++a < 1)
	{
		std::cout<<"------------------------------------"<<std::endl;
		std::cout<<"Dime el nombre del contacto"<<std::endl;
		std::cin >> agenda->contacts[a].first_name;
		
		std::cout<<"Dime el apellido del contacto"<<std::endl;
		std::cin >> agenda->contacts[a].last_name;
		
		std::cout<<"Dime el apodo del contacto"<<std::endl;
		std::cin >> agenda->contacts[a].nickname;
		
		std::cout<<"Dime el numero de telefono del contacto"<<std::endl;
		std::cin >> agenda->contacts[a].phone;

		std::cout<<"Dime el secreto mas oscuro"<<std::endl;
		std::cin >> agenda->contacts[a].darkest_secret;
		std::cout<<"------------------------------------"<<std::endl;
		w++;
	}
	return(w);
}

void ft_search(PhoneBook *agenda, int a)
{
	int i = 0;
	if (a > 0)
	{
		while (i < a)
		{
			std::cout<<"------------------------------------"<<std::endl;
			std::cout <<"Nombre:" << agenda->contacts[i].first_name<<std::endl;
			std::cout<<"apellido:" <<agenda->contacts[i].last_name<<std::endl;
			std::cout<<"Login:" <<agenda->contacts[i].nickname<<std::endl;
			std::cout<<"numero:" <<agenda->contacts[i].phone<<std::endl;
			std::cout<<"Secreto:" <<agenda->contacts[i].darkest_secret<<std::endl;
			std::cout<<"------------------------------------"<<std::endl;
			i++;
		}
	}
}

int main()
{
	PhoneBook agenda;
	std::string action;
	int num = 0;
	while (true)
	{
		std::cout<<"------------------------------------"<<std::endl;
		std::cout<<"Bienvenido a la agenda buena buena"<<std::endl;
		std::cout<<"Que quieres hacer (ADD, SEARCH, EXIT)"<<std::endl;
		std::cout<<"------------------------------------"<<std::endl;
		std::cin >> action;

		if (action == "EXIT")
			break;
		else if (action == "ADD")
			num += ft_add(&agenda);
		else if (action == "SEARCH")
			ft_search(&agenda, num);
		else
			std::cout<<"opcion incorrecta"<<std::endl;
	}
}