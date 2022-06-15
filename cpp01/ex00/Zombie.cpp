/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:57:42 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 18:00:11 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout<< "*Sonido de zombie muriendo* "<< this->_name <<std::endl;
}

void Zombie::announce(void)
{
	std::cout<<this->_name <<  " BraiiiiiiinnnzzzZ"<<std::endl;
}