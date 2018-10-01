#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>

const	std::string	ZombieHorde::_names[10] =
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

const	std::string	ZombieHorde::_types[5] =
{
	"Bruiser",
	"Kamikaze",
	"Hunter",
	"Spicer",
	"Boomer"
};

ZombieHorde::ZombieHorde(int n)
{
	int		i;

	_number = n;
	srand(time(0));
	i = -1;
	_horda = new Zombie[n]();
	while (++i < n)
		_horda[i] = randomZombie();
	std::cout << "A ZombieHorde was created" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete	[]	_horda;
	std::cout << "A Zombiehorde was destroyed" << std::endl;
}

void	ZombieHorde::announce()
{
	int		i;

	i = -1;
	while(++i < _number)
		_horda[i].announce();
}

Zombie	&ZombieHorde::randomZombie()
{
	Zombie	*holder;

	holder = new Zombie(_names[rand() % 10], _types[rand() %5]);
	return (*holder);
}