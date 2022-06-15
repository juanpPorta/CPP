/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:24:20 by jporta            #+#    #+#             */
/*   Updated: 2022/06/15 19:01:29 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <iostream>
#include <string>


class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		void setType(std::string type);
		const std::string GetType(void);
};