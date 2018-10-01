#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	std::string	_name;
	std::string	_type;

	public:
		Zombie(std::string name, std::string type);
		Zombie();
		~Zombie();

		void	announce();
};

#endif