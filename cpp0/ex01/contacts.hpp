/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:21:49 by jporta            #+#    #+#             */
/*   Updated: 2022/06/08 16:57:00 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <iostream>
#include <string>

class Contacts
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone;
		std::string darkest_secret;
	public:
		bool index;
		void set_data(int index, std::string str);
		std::string get_data(int index);
};
