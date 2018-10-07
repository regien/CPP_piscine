#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <fstream>
# include <iostream>
# include <string>

class AWeapon
{
	protected:
		std::string				_Name;
		int						_Apcost;
		int						_Damage;
		AWeapon();

	public:
		AWeapon(std::string const & Name, int apcost, int damage);
		AWeapon(AWeapon const & rhs);
		virtual ~AWeapon();

		//operators
		AWeapon					&operator = (AWeapon const & rhs);
		virtual void			attack() const;

		//getters
		std::string				get_Name() const;
		int						get_Apcost() const;
		int						get_Damage() const;

};

#endif