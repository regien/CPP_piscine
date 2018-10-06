#include "FragTrap.hpp"
#include <iostream>

bool				FragTrap::_time_rnd_set = false;

const std::string	FragTrap::_melee_atacks[5] =
{
	"Corrosive Axe",
	"Broken Bone",
	"Knife",
	"Bladed pistol",
	"butt of a gun"
};

const std::string	FragTrap::_ranged_attacks[5] =
{
	"Assault Rifle",
	"Electrical Sniper Rifle",
	"Explosive Coco",
	"Dart",
	"Corrosive Sniper"
};

const std::string	FragTrap::_semi_random_attacks[5] =
{
	"Laser inferno - Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
	"One Shot Wonder - All these bullets in just one shot",
	"Gun Wizard - Uh, how do I cast magic missile?",
	"Funzerker - Don't ask me where this ammo's coming from!",
	"Torgue Fiesta - One for you, one for you, one for you!"
};

//CONSTRUCTORS
FragTrap::FragTrap() :
_Name("Handsome_noone"), _Hit_Points(100), _Energy_Points(100),
_Lv(1), _Melle_atck_dmg(30), _Ranged_atck_dmg(20),
_Max_EP(100), _Max_HP(100), _Armor_dmg_reduc(5)
{
	if (!_time_rnd_set)
	{
		srand(time(0));
		_time_rnd_set = true;
	}
	std::cout << "Constructing FFR4G-TP named Handsome_noone" << std::endl;
}

FragTrap::FragTrap(std::string Name) :
_Name(Name), _Hit_Points(100), _Energy_Points(100),
_Lv(1), _Melle_atck_dmg(30), _Ranged_atck_dmg(20),
_Max_EP(100), _Max_HP(100), _Armor_dmg_reduc(5)
{
	if (!_time_rnd_set)
	{
		srand(time(0));
		_time_rnd_set = true;
	}
	std::cout << "Constructing FFR4G-TP named" <<
			  Name << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) :
_Name(rhs._Name + " Copy")
{
	*this = rhs;
	std::cout << "Replicating a FFR4G-TP, new name "
			  << _Name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "<" << _Name << "> : I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	std::cout << "Destroying <FFR4G-TP " << _Name << ">" << std::endl;
}

// OPERATORS
FragTrap			&FragTrap::operator = (const FragTrap &data)
{
	if(this == &data)
		return (*this);
	_Name = data._Name;
	_Hit_Points = data._Hit_Points;
	_Energy_Points = data._Energy_Points;
	_Lv = data._Lv;
	_Melle_atck_dmg = data._Melle_atck_dmg;
	_Ranged_atck_dmg = data._Ranged_atck_dmg;
	_Armor_dmg_reduc = data._Armor_dmg_reduc;
	return (*this);
}

//METHODS
void				FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "Take two bullets, then call me in the morning. - FFR4G-TP " << _Name
			  << " attacks " << target << " at range with " << _ranged_attacks[rand() % 5]
			  << " , causing " << _Ranged_atck_dmg << " Points of Damage!!" << std::endl;
}

void				FragTrap::melleaAttack(std::string const & target)
{
	std::cout << "Ha ha ha! Fall before your robot overlord! - FFR4G-TP " << _Name
			  << " attacks " << target << " at melle with " << _melee_atacks[rand() % 5]
			  << " , causing " << _Melle_atck_dmg << " Points of Damage!!" << std::endl;
}

void				FragTrap::takeDamage(unsigned int amount)
{
	int		dmg_calculator;
	int		HP_calculator;

	if ((dmg_calculator = amount - _Armor_dmg_reduc) < 0)
		dmg_calculator = 0;
	std::cout << "<FFR4G-TP " << _Name << "> takes " << dmg_calculator << " Points of damage!"
			  << std::endl;
	if ((HP_calculator = _Hit_Points - dmg_calculator) <= 0)
	{
		std::cout << "<FFR4G-TP" << _Name << "> No fair! I wasn't ready. " 
				  << "*HP to zero*" << std::endl;
		_Hit_Points = 0;
	}
	else
		_Hit_Points -= dmg_calculator;
	
}

void				FragTrap::beRepaired(unsigned int amount)
{
	int		HP_calculator = 0;
	int		recover_amt = 0;

	if ((HP_calculator = _Hit_Points + amount) >= _Max_HP)
	{
		HP_calculator = _Max_HP;
		recover_amt = HP_calculator - _Hit_Points;
	}
	std::cout << "<FFR4G-TP " << _Name << "> * Recovered " << recover_amt
			  << " of HP *" << std::endl;
	_Hit_Points = _Hit_Points + recover_amt;
}

void				FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_Energy_Points >= 25)
	{
		std::cout << "<FFR4G-TP " << _Name << "> Casting "
				  << _semi_random_attacks[rand() % 5] << " to " << target
				  << std::endl;
	}
	else
		std::cout << "<FFR4G-TP " << _Name << "> * Not enought energy to run "
				  << "Vaulthunter_dot_exe * " << std::endl;
	std::cout << "<FFR4G-TP " << _Name << "> " << _Energy_Points
			  << " Remaining Energy Points" << std::endl;
}

int					FragTrap::get_max_ep() const
{
	return (_Max_EP);
}

int					FragTrap::get_max_hp() const
{
	return (_Max_HP);
}
