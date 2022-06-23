/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:13:15 by jporta            #+#    #+#             */
/*   Updated: 2022/06/23 17:19:11 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>

int findReplaces(std::string str, std::string s1)
{
	int i = 0;
	int pos;
	std::string tmp;
	while(str.find(s1) != (unsigned long)-1)
	{
		pos = str.find(s1);
		tmp = str.substr(pos + 1, str.length());
		str = tmp;
		i++;
	}
	return(i);
}

std::string replace_line(std::string &line, std::string s1, std::string s2)
{
	int pos;
    int i = 0;
    std::string tmp;
    while(i < findReplaces(line, s1))
    {
        pos = line.find(s1);
        tmp = line.substr(0, pos) + s2 +  line.substr(pos + s1.length(), line.length());
        line = tmp;
        i++;
    }
    std::cout << line << std::endl;
    return (line);
}

int main(int argc, char *argv[])
{
	
    if(argc != 4 || argv[2][0] == '\0' || argv[3][0] == '\0')
    {
        std::cout << "Argumentos incorrectos" << std::endl;
        return (1);
    }
	std::fstream file;
	std::fstream newfile;
	std::string filename = (std::string)argv[1];
	std::string newfilename = (std::string)argv[1] + ".replace";
	std::string line;
	std::string newline;
	std::string s1 = (std::string)argv[2];
	std::string s2 = (std::string)argv[3];
	file.open(filename, std::ios::in);
	newfile.open(newfilename, std::ios::out);
	while (std::getline(file, line))
	{
		if (line.find(s1) != (unsigned long)-1)
		{
			newline = replace_line(line, s1, s2);
			newfile << newline << std::endl;
		}
		else
			newfile << line << std::endl;
	}
	file.close();
	return(0);	
}