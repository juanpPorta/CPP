
#include "Karen.hpp"

Karen::Karen()
{
    std::cout << "Karen constructor" << std::endl;
}
Karen::~Karen()
{
    std::cout << "Karen destructor" << std::endl;
}

void	Karen::debug(void)
{
	std::cout<<"[DEBUG]"<<std::endl  << "I love" <<
		" to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup" <<
		" burger. I just love it!." << std::endl;
}

void	Karen::info(void)
{
	std::cout<<"[INFO]"<<std::endl  << "I cannot" <<
		" believe adding extra bacon cost more money. You don’t put enough! If you" <<
		" did I would not have to ask for it!." << std::endl;
}

void	Karen::warning(void)
{
	std::cout<<"[WARNING]"<<std::endl  << "I think I deserve to have some extra bacon for free." <<
		" I've been coming here for years and you just started working here last" <<
		" month..." << std::endl;
}

void	Karen::error(void)
{
	std::cout<<"[ERROR]"<<std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

enum juanete {DEBUG, INFO, WARNING, ERROR};

void Karen::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            a = i;
            break;
        }
    }

    switch (a)
    {
        case DEBUG:
            debug();
            info();
            warning();
            error();
            break;
        case INFO:
            info();
            warning();
            error();
            break;
        case WARNING:
            warning();
            error();
            break;
        case ERROR:
            error();
            break;
        default:
            std::cout << "Argumentos incorrectos" << std::endl;
            break;
    }
}