/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:09:20 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 18:05:29 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::SetName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout<<this->_name<<" BraiiiiiiinnnzzzZ"<<std::endl;
}

Zombie::Zombie(void)
{
	std::cout<<"*Zombies Han spawneado*"<<std::endl;
}

Zombie::~Zombie(void)
{
	std::cout<< "*Sonido de zombie muriendo* "<< this->_name <<std::endl;
}

std::string Zombie::GetName(void)
{
	return(this->_name);
}
