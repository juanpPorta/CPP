/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:24:42 by jporta            #+#    #+#             */
/*   Updated: 2022/05/30 14:50:31 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int a;

	a = 0;
	if (argc > 1)
	{
		while (argv[++a])
		{
			for (int i = 0; argv[a][i]; i++)
			{
				std::cout << (char)toupper(argv[a][i]);
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
		
}