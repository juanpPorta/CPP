/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:16:29 by jporta            #+#    #+#             */
/*   Updated: 2022/06/07 19:44:08 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.hpp"

int ft_add(PhoneBook *agenda, int num)
{
	std::string hola;

	std::cout<<num<<std::endl;
	std::cout<<"------------------------------------"<<std::endl;
	std::cout<<"Dime el nombre del contacto"<<std::endl;
	std::cin >> hola;
	agenda->contacts[num].set_data(1, hola);
	
	std::cout<<"Dime el apellido del contacto"<<std::endl;
	std::cin >> hola;
	agenda->contacts[num].set_data(2, hola);
	
	std::cout<<"Dime el apodo del contacto"<<std::endl;
	std::cin >> hola;
	agenda->contacts[num].set_data(3, hola);
	
	std::cout<<"Dime el numero de telefono del contacto"<<std::endl;
	std::cin >> hola;
	agenda->contacts[num].set_data(4, hola);

	std::cout<<"Dime el secreto mas oscuro"<<std::endl;
	std::cin >> hola;
	agenda->contacts[num].set_data(5, hola);
	std::cout<<"------------------------------------"<<std::endl;
	agenda->contacts[num].index = true;
	return(num);
}

void Contacts::set_data(int index, std::string str)
{
	if (index == 1)
		this->first_name = std::string (str);
	else if (index == 2)
		this->last_name = std::string (str);
	else if (index == 3)
		this->nickname = std::string (str);
	else if (index == 4)
		this->phone = std::string (str);
	else if (index == 5)
		this->darkest_secret = std::string (str);
}

std::string Contacts::get_data(int index)
{
	if (index == 1)
		return(this->first_name);
	else if (index == 2)
		return(this->last_name);
	else if (index == 3)
		return(this->nickname);
	else if (index == 4)
		return(this->phone);
	else if (index == 5)
		return(this->darkest_secret);
	return (NULL);
}

void ft_search(PhoneBook *agenda, int a)
{
	int i = -1;
	std::string str;
	if (a > -1)
	{
		std::cout<<"------------------------------------"<<std::endl;
			std::cout<<"|"<<"Nombre:"<<"|";
			std::cout<<"apellido:"<<"|";
			std::cout<<"Login:"<<"|";
			std::cout<<"numero:" <<"|";
			std::cout<<"Secreto:" <<"|"<<std::endl;
		while (agenda->contacts[++i].index == true)
		{
			std::cout<<"|"<< agenda->contacts[i].get_data(1)<< "|";
			std::cout<< agenda->contacts[i].get_data(2)<< "|";
			std::cout<< agenda->contacts[i].get_data(3)<< "|";
			std::cout<< agenda->contacts[i].get_data(4)<< "|";
			std::cout<< agenda->contacts[i].get_data(5)<< "|"<<std::endl;
		}
		std::cout<<"------------------------------------"<<std::endl;
	}
}

void lekas()
{
	system("leaks death_note");
}

int main()
{
	atexit(lekas);
	PhoneBook agenda;
	std::string action;
	int num = -1;
	int i = 0;
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
		{
			if (num <= 7)
				num++;
			if (num > 7)
				num = 0;
			ft_add(&agenda, num);
		}
		else if (action == "SEARCH")
			ft_search(&agenda, num);
		else
			std::cout<<"opcion incorrecta"<<std::endl;
	}
}