#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

const	std::string	ZombieEvent::_names[10] =
{
	"Emma",
	"Daniel",
	"Henry",
	"Jhonatan",
	"Emilia",
	"Paul",
	"Larry",
	"Andre",
	"Luis",
	"Josh"
};

ZombieEvent::ZombieEvent()
{
	srand(time(0));
	std::cout << "A ZombieEvent was created" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "A ZombieEvent was destroyed" << std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
	std::cout << "The type is: " << _type << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	if (_type == "")
	{
		std::cout << "Type is not initialized, can't create zombie"
				  << std::endl;
		return (NULL);
	}
	else
		return (new Zombie(name, _type));
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie	*hold_zombie;

	hold_zombie = newZombie(_names[rand() % 10]);
	hold_zombie->announce();
	return (hold_zombie);
}