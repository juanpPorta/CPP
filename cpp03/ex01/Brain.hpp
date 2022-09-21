#pragma once
#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain &operator=(const Brain&);
		Brain(const Brain &);
		void SetIdeas(const std::string *ideas);
		const std::string *GetIdeas() const;
};