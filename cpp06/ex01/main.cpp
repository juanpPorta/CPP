
#include "main.hpp"

uintptr_t serialize(Data *ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t ptr)
{
    return(reinterpret_cast<Data *>(ptr));
}

int main(void)
{
    
    return(0);
}