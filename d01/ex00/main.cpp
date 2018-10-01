#include "Pony.hpp"
#include <iostream>
#include <string>

Pony	*heap_example(std::string name)
{
	Pony	*ptr;

	ptr = new Pony(name);
	std::cout << "Exiting heap_example" << std::endl;
	return (ptr);
}

void	stack_example(std::string name)
{
	Pony	example(name);
	std::cout << "Exiting stack_example" << std::endl;
}

int		main(void)
{
	Pony	*ptr;

	ptr = heap_example("heap_pony");
	delete ptr;
	stack_example("stack_pony");
	return (0);
}