#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);
		virtual ~Animal();

		std::string	getType() const;
		void		setType(const std::string &type);

		virtual void	makeSound() const;
};

void	label(std::string typeClass, std::string type, std::string text);
#endif
