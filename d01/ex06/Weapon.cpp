#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon() {};

std::string		Weapon::getType() const
{
	return (_type);
}

void			Weapon::setType(std::string str)
{
	_type = str;
}