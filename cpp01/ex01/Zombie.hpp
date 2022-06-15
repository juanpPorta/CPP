#pragma once
#include <iostream>
#include <iomanip>
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);

		void SetName(std::string name);
		std::string GetName(void);
};
Zombie *ZombieHorde(int n, std::string name);