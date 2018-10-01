#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>

Zombie::Zombie(std::string name, std::string type) :
_name(name), _type(type)
{
	if (type == "")
	{
		std::cerr << "Invalid type" << std::endl;
		exit(EXIT_FAILURE);
	}
}

Zombie::~Zombie()
{
	std::string		entry_line = "<";
	std::string		death_message = "NOOOOoooo........";	

	entry_line += _name + " " + _type + "> ";
	std::cout << entry_line + death_message << std::endl;
}


void	Zombie::announce()
{
	std::string		entry_line = "<";
	std::string		message = "Braiiiiiiinnnssss...";

	entry_line += _name + " " + _type + "> ";
	std::cout << entry_line + message << std::endl;
}