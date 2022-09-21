
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	// const Animal* i = new Animal();

   	// i->makeSound();

    delete j;
    // delete i;
}