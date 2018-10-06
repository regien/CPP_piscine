#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>

class FragTrap
{
	private:
		static const std::string	_melee_atacks[5];
		static const std::string	_ranged_attacks[5];
		static const std::string	_semi_random_attacks[5];
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
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		~FragTrap();
		FragTrap					&operator = (const FragTrap &data);

		int					get_max_ep() const;
		int					get_max_hp() const;
		void						rangedAttack(std::string const & target);
		void						melleaAttack(std::string const & target);
		void						takeDamage(unsigned int amount);
		void						beRepaired(unsigned int amount);
		void						vaulthunter_dot_exe(std::string const &target);
};

#endif

