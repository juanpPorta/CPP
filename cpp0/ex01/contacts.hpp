/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:21:49 by jporta            #+#    #+#             */
/*   Updated: 2022/05/30 15:29:40 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Contacts
{
	public:
		int index[7];
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone;
		std::string darkest_secret;			
};
