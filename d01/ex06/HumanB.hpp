#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <string>

class HumanB
{
	Weapon		*_weapon;
	std::string	_name;
	
	public:
//		HumanB(std::string name, Weapon *weapon);
		HumanB(std::string name);
		~HumanB();
		
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif