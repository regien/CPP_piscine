#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	std::string	_name;
	std::string	_type;

	public:
		Zombie(std::string name, std::string type);
		~Zombie();

		void	announce();
};

#endif