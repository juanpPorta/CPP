#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog (const Dog &copy);
        Dog& operator=(const Dog&);
        void makeSound( void ) const;
        Brain *GetBrain(void)const;
		void SetBrain(Brain *Brain);
};
