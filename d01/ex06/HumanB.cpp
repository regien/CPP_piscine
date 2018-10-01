#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):
_name(name)
{}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with his "
			  << _weapon->getType() << std::endl;
}