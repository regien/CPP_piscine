#include "Victim.hpp"

//CONSTRUCTORS

Victim::Victim() {}

Victim::Victim(std::string name):
_Name(name)
{
	std::cout << "Some random victim called " << name <<  " just popped !" << std::endl;
}

Victim::Victim(const Victim &rhs)
{
	*this = rhs;
}

Victim::~Victim()
{
	std::cout << "Victim " << _Name
			  << " just died for no apparent reason !"
			  << std::endl;
}

//OPERATORS

Victim			&Victim::operator = (const Victim &rhs)
{
	_Name = rhs._Name;
	return (*this);
}

//METHODS
void				Victim::getPolymorphed() const
{
	std::cout << _Name << " has been turned into a cute little sheep !" << std::endl;
}

//GETTERS

std::string			Victim::get_Name() const
{
	return (_Name);
}

//STREAMS OVERLOAD

std::ostream	&operator << (std::ostream &lhs, const Victim &rhs)
{
	lhs << "I'm " << rhs.get_Name() << " and i like otters !"  << std::endl;
	return (lhs);
}