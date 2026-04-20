#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include "helpers.h"

int	main(void)
{
	{
		Animal	a;
		Animal	b(a);
		Animal	c;

		c = b;
		c.makeSound();
	}
	std::cout << std::endl;
	{
		Dog	a;
		Dog	b(a);
		Dog	c;

		c = b;
		c.makeSound();
		std::cout << (&a == &b ? "SAME" : "DIFFERENT objects") << std::endl;
	}
	std::cout << std::endl;
	{
		Cat	a;
		Cat	b(a);
		Cat	c;

		c = b;
		c.makeSound();
		std::cout << (&a == &b ? "SAME" : "DIFFERENT objects") << std::endl;
	}
	std::cout << std::endl;
	{
		Brain a;
	}
	std::cout << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		Animal *animals[4];
		animals[0] = new Dog();
		animals[1] = new Dog();
		animals[2] = new Cat();
		animals[3] = new Cat();
		for (int i = 0; i < 4; i++)
		{
			animals[i]->makeSound();
			delete animals[i];
		}
	}
}
