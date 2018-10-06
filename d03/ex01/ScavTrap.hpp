#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>

class ScavTrap
{
	private:
		static const std::string	_melee_atacks[5];
		static const std::string	_ranged_attacks[5];
		static const std::string	_semi_random_challengues[5];
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
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();
		ScavTrap					&operator = (const ScavTrap &data);

		int							get_Max_hp() const;
		int							get_Max_ep() const;
		void						rangedAttack(std::string const & target);
		void						melleaAttack(std::string const & target);
		void						takeDamage(unsigned int amount);
		void						beRepaired(unsigned int amount);
		void						challengueNewcomer(std::string const & target);
};

#endif
