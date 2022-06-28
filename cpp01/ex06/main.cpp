
#include "Karen.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Argumentos incorrectos" << std::endl;
        return (0);
    }
    Karen Karen;
    Karen.complain((std::string)argv[1]);
    return (0);
}