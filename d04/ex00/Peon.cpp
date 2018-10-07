#include "Peon.hpp"

//CONSTRUCTORS

Peon::Peon() : Victim() {}

Peon::Peon(std::string name):
Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &rhs)
{
	*this = rhs;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

//OPERATORS

Peon			&Peon::operator = (const Peon &rhs)
{
	_Name = rhs._Name;
	return (*this);
}

//METHODS
void				Peon::getPolymorphed() const
{
	std::cout << _Name << " has been turned into a pink pony !" << std::endl;
}