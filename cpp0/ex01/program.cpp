/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:16:29 by jporta            #+#    #+#             */
/*   Updated: 2022/06/08 20:06:15 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.hpp"
#include <string>
#include <iostream>

bool isNumber(std::string str)
{
    for (int i = 0; str[i]; i++) {
        if (std::isdigit(str[i]) == 0) return false;
    }
    return true;
}

int ft_add(PhoneBook *agenda, int num)
{
	std::string hola;

	std::cout<<"----------------------------"<<std::endl;
	std::cout<<"Dime el nombre del contacto:"<<std::endl;
	std::cout<<"----------------------------"<<std::endl;
	std::getline(std::cin, hola);
	agenda->contacts[num].set_data(1, hola);
	std::cout<<"------------------------------"<<std::endl;
	std::cout<<"Dime el apellido del contacto:"<<std::endl;
	std::cout<<"------------------------------"<<std::endl;
	std::getline(std::cin, hola);
	agenda->contacts[num].set_data(2, hola);
	std::cout<<"---------------------------"<<std::endl;
	std::cout<<"Dime el apodo del contacto:"<<std::endl;
	std::cout<<"---------------------------"<<std::endl;
	std::getline(std::cin, hola);
	agenda->contacts[num].set_data(3, hola);
	std::cout<<"----------------------------------------"<<std::endl;
	std::cout<<"Dime el numero de telefono del contacto:"<<std::endl;
	std::cout<<"----------------------------------------"<<std::endl;
	std::getline(std::cin, hola);
	if(!isNumber(hola))
		while (!isNumber(hola))
		{
			std::cout<<"----------------------------------------"<<std::endl;
			std::cout<<"Numero no valido, vuelva a introducirlo:"<<std::endl;
			std::cout<<"----------------------------------------"<<std::endl;
			std::getline(std::cin, hola);
		}
	agenda->contacts[num].set_data(4, hola);
	std::cout<<"---------------------------"<<std::endl;
	std::cout<<"Dime el secreto mas oscuro:"<<std::endl;
	std::cout<<"---------------------------"<<std::endl;
	std::getline(std::cin, hola);
	agenda->contacts[num].set_data(5, hola);
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

std::string ft_lencopy(std::string string)
{
	std::string copia;
	int i = -1;
	while (++i < 9)
		copia[i] = string[i];
	copia[9] = '.';
	return (copia);
}

std::string Contacts::get_data(int index)
{
	std::string str;
	if (index == 1)
	{
		if (this->first_name.length() > 10)
		{
			str = this->first_name.substr(0,9);
			str.append(1, '.');
		}
		else
			return(this->first_name);
		return(str);
	}
	else if (index == 2)
	{
		if (this->last_name.length() > 10)
		{
			str = this->last_name.substr(0,9);
			str.append(1, '.');
		}
		else
			return(this->last_name);
		return(str);
	}
	else if (index == 3)
	{
		if (this->nickname.length() > 10)
		{	
			str = this->nickname.substr(0,9);
			str.append(1, '.');;
		}
		else
			return(this->nickname);
		return(str);
	}
	else if (index == 4)
	{
		if (this->phone.length() > 10)
		{	
			str = this->phone.substr(0,9);
			str.append(1, '.');;
		}
		else
			return(this->phone);
		return(str);
	}
	else if (index == 5)
	{
		if (this->darkest_secret.length() > 10)
		{
			str = this->darkest_secret.substr(0,9);
			str.append(1, '.');
		}
		else
			return(this->darkest_secret);
		return(str);
	}
	return (NULL);
}

void ft_search(PhoneBook *agenda, int a)
{
	int i = -1;
	int str;
	if (a > -1)
	{
		std::cout<<"---------------------------------------------"<<std::endl;
		std::cout<<"|"<<"Index:    ";
		std::cout<<"|"<<"Nombre:   ";
		std::cout<<"|"<<"apellido: ";
		std::cout<<"|"<<"Login:    "<<"|"<<std::endl;
		std::cout<<"---------------------------------------------"<<std::endl;
		while (agenda->contacts[++i].index == true)
		{
			std::cout<<"|"<<std::setw(10)<<i + 1;
			std::cout<<"|"<<std::setw(10)<< agenda->contacts[i].get_data(1);
			std::cout<<"|"<<std::setw(10)<< agenda->contacts[i].get_data(2);
			std::cout<<"|"<<std::setw(10) <<agenda->contacts[i].get_data(3)<< "|"<<std::endl;
			std::cout<<"---------------------------------------------"<<std::endl;
		}
		std::cout << "¿Cual quieres ver?"<<std::endl;
		std::cin >> str;
		if (str > 0 && str < 9 && agenda->contacts[str - 1].index == true)
		{
				std::cout<<"-------------------------------------------------------------------"<<std::endl;
				std::cout<<"|"<<"Index:    ";
				std::cout<<"|"<<"Nombre:   ";
				std::cout<<"|"<<"apellido: ";
				std::cout<<"|"<<"Login:    ";
				std::cout<<"|"<<"numero:   ";
				std::cout<<"|"<<"Secreto:  " <<"|"<<std::endl;
				std::cout<<"-------------------------------------------------------------------"<<std::endl;
				std::cout<<"|"<<std::setw(10)<<str;
				std::cout<<"|"<<std::setw(10)<<agenda->contacts[str - 1].get_data(1);
				std::cout<<"|"<<std::setw(10)<<agenda->contacts[str - 1].get_data(2);
				std::cout<<"|"<<std::setw(10)<<agenda->contacts[str - 1].get_data(3);
				std::cout<<"|"<<std::setw(10)<<agenda->contacts[str - 1].get_data(4);
				std::cout<<"|"<<std::setw(10)<<agenda->contacts[str - 1].get_data(5)<< "|"<<std::endl;
				std::cout<<"-------------------------------------------------------------------"<<std::endl;
		}
		else
			std::cout << "Indice no valio, Por favor vuelva a introducirlo" << std::endl;
	}
	else
		std::cout << "NO HAY NA DE NA"<< std::endl;
	std::cin.ignore();
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
		std::cout<<"------------------------------------"<<std::endl;
		std::cout<<"Bienvenido a la agenda buena buena"<<std::endl;
		std::cout<<"Que quieres hacer (ADD, SEARCH, EXIT)"<<std::endl;
		std::cout<<"------------------------------------"<<std::endl;
	while (std::getline(std::cin, action))
	{
		// std::getline(std::cin, action);

		if (action.compare("EXIT") == 0)
			break;
		else if (action.compare("ADD") == 0)
		{
			if (num <= 7)
				num++;
			if (num > 7)
				num = 0;
			ft_add(&agenda, num);
		}
		else if (action.compare("SEARCH") == 0)
			ft_search(&agenda, num);
		else
		std::cout<<"opcion incorrecta"<<std::endl;
		std::cout<<"------------------------------------"<<std::endl;
		std::cout<<"Bienvenido a la agenda buena buena"<<std::endl;
		std::cout<<"Que quieres hacer (ADD, SEARCH, EXIT)"<<std::endl;
		std::cout<<"------------------------------------"<<std::endl;
	}
}