
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

    std::cout << std::endl << std::endl << std::endl;
	//USE OF VIRTUAL
	const WrongAnimal* wc = new WrongCat();
	const WrongCat* wc2 = new WrongCat();
	wc->makeSound();
	wc2->makeSound();
	delete wc;
	delete wc2;
	return 0;
return 0;
}