#ifndef WEAPON_CPP
# define WEAPON_CPP
# include <iostream>
# include <string>

class	Weapon
{
	std::string		_type;
	

	public:
		Weapon(std::string type);
		~Weapon();

		std::string		getType() const;
		void			setType(std::string);
};

#endif