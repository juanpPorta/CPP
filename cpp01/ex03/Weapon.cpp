/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:29:30 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 19:01:24 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	
}

Weapon::~Weapon(void)
{

}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string Weapon::GetType(void)
{
	return(this->type);
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}