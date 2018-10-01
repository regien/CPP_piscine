#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde		master(5);

	std::cout << std::endl << "displaying announces"
			  << std::endl;
	master.announce();
	std::cout << std::endl << "killing everyone"
			  << std::endl;
}