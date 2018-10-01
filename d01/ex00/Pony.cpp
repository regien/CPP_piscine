#include "Pony.hpp"

Pony::Pony(std::string name)
{
	name_pony = name;
	std::cout << "Creating a new Pony with the name "
			  << name << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony " << name_pony
			  << " is being destroyed" << std::endl;
}