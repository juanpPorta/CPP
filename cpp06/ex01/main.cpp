
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
    uintptr_t numba;    
    
	Data *ptr = new Data();
	Data *test = new Data();
	ptr->num = 6;
	ptr->num2 = 7;
	std::cout << "test: " << test << std::endl;
	std::cout << "test->num: " << test->num << std::endl;
	numba = serialize(ptr);
	test = deserialize(numba);
	std::cout << "numba: " << numba << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "ptr->num: " << ptr->num << std::endl;
	std::cout << "test: " << test << std::endl;
	std::cout << "test->num: " << test->num << std::endl;
    std::cout << "ptr->num2: " << ptr->num2 << std::endl;
	std::cout << "test: " << test << std::endl;
	std::cout << "test->num2: " << test->num2 << std::endl;
    delete ptr;
    return(0);
}