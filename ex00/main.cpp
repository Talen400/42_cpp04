#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

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
	return (0);
}
