#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <string>
#include <iomanip>


int main(void)
{
	ZombieEvent		master;
	Zombie			*holder;

	master.setZombieType("slave");
	holder = master.randomChump();
	
	Zombie	*z1 = master.randomChump();
	Zombie	*z2 = master.randomChump();
	Zombie	*z3 = master.randomChump();
	Zombie	*z4 = master.randomChump();
	
	master.setZombieType("random");
	
	Zombie	*z5 = master.randomChump();
	Zombie	*z6 = master.randomChump();
	Zombie	*z7 = master.randomChump();
	Zombie	*z8 = master.randomChump();

	delete 	holder;
	delete	z1;
	delete	z2;
	delete	z3;
	delete	z4;
	delete	z5;
	delete	z6;
	delete	z7;
	delete	z8;
	
	return (0);
}