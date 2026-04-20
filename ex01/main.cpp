#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

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
	}
	std::cout << std::endl;
	{
		Cat	a;
		Cat	b(a);
		Cat	c;

		c = b;
		c.makeSound();
	}


	std::cout << "teste" << std::endl;
}
