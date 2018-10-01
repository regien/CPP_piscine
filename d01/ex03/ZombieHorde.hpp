#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
	static const std::string	_names[10];
	static const std::string	_types[5];
	Zombie						*_horda;
	int							_number;

	public:
		ZombieHorde(int n);
		~ZombieHorde();

		void	announce();
		Zombie	&randomZombie();
};

#endif