#include "Sorcerer.hpp"

//CONSTRUCTORS

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title):
_Name(name), _Title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &rhs)
{
	*this = rhs;
}

Sorcerer::~Sorcerer()
{
	std::cout << _Name << ", " << _Title
			  << ", is dead. Consequences will never be the same !"
			  << std::endl;
}

//OPERATORS

Sorcerer			&Sorcerer::operator = (const Sorcerer &rhs)
{
	_Name = rhs._Name;
	_Title = rhs._Title;
	return (*this);
}

//METHODS
void				Sorcerer::polymorph(const Victim &target) const
{
	target.getPolymorphed();
}

//GETTERS

std::string			Sorcerer::get_Name() const
{
	return (_Name);
}

std::string			Sorcerer::get_Title() const
{
	return (_Title);
}

//STREAMS OVERLOAD

std::ostream	&operator << (std::ostream &lhs, const Sorcerer &rhs)
{
	lhs << "I am " << rhs.get_Name() << ", " << rhs.get_Title()
		<< ", and I like ponies !" << std::endl;
	return (lhs);
}