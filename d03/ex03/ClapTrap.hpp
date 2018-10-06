#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>

class ClapTrap
{

	protected:
		static const std::string	_melee_atacks[5];
		static const std::string	_ranged_attacks[5];
		static bool					_time_rnd_set;
		std::string					_Name;
		int							_Hit_Points;
		int							_Energy_Points;
		int							_Lv;
		int							_Melle_atck_dmg;
		int							_Ranged_atck_dmg;
		int							_Max_EP;
		int							_Max_HP;
		int							_Armor_dmg_reduc;

	public:
		ClapTrap();
		ClapTrap(std::string name); //possibly
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();
		ClapTrap					&operator = (const ClapTrap &data);

		const std::string			get_name(void) const;
		void						rangedAttack(std::string const & target);
		void						melleaAttack(std::string const & target);
		void						takeDamage(unsigned int amount);
		void						beRepaired(unsigned int amount);
		void						challengueNewcomer(std::string const & target);
};

#endif