
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	
	std::cout << std::endl << std::endl << std::endl;
	Animal *animalarray[10];
	for(int i = 0;i < 5;i++)
		animalarray[i] = new Dog();
	for(int i = 5;i < 10;i++)
		animalarray[i] = new Cat();

	Animal *deepcopy;
	deepcopy = animalarray[2];
	std::cout << "Deep copy " << deepcopy->getType() << std::endl;
	for(int i = 0;i < 10;i++)
		delete animalarray[i];
	
	std::cout << std::endl << std::endl << std::endl << "DEEP COPY BRAIN " << std::endl  << std::endl; 
	
	{
		//DEEP COPY BRAIN
		Dog dog1;
		

		std::string ideas[100];
		ideas[0] = "NOIDEA";
		
		dog1.GetBrain()->SetIdeas(ideas);

		Dog deepcopydog = Dog(dog1);

		
		ideas[0] = "IDEA";
		
		dog1.GetBrain()->SetIdeas(ideas);
		
		std::cout<<"este: " << dog1.GetBrain()->GetIdeas()[0] << std::endl;
		std::cout<<"este: " << deepcopydog.GetBrain()->GetIdeas()[0] << std::endl;
	}
	return (0);
}