#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

const std::string	FragTrap::_semi_random_attacks[5] =
{
	"Laser inferno - Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
	"One Shot Wonder - All these bullets in just one shot",
	"Gun Wizard - Uh, how do I cast magic missile?",
	"Funzerker - Don't ask me where this ammo's coming from!",
	"Torgue Fiesta - One for you, one for you, one for you!"
};

//CONSTRUCTORS
FragTrap::FragTrap()
{
	_Name = "Handsome_noone";
	_Hit_Points = 100;
	_Energy_Points = 100;
	_Lv = 1;
	_Melle_atck_dmg = 30;
	_Ranged_atck_dmg = 20;
	_Max_EP = 100;
	_Max_HP = 100;
	_Armor_dmg_reduc = 5;
	std::cout << "Constructing FFR4G-TP named Handsome_noone" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
	_Name = Name;
	_Hit_Points = 100;
	_Energy_Points = 100;
	_Lv = 1;
	_Melle_atck_dmg = 30;
	_Ranged_atck_dmg = 20;
	_Max_EP = 100;
	_Max_HP = 100;
	_Armor_dmg_reduc = 5;
	std::cout << "Constructing FFR4G-TP named" <<
			  Name << std::endl;
}

/*
FragTrap::FragTrap(FragTrap const &rhs)
{
	_Name = rhs._Name + " copy";
	*this = rhs;
	std::cout << "Replicating a FFR4G-TP, new name "
			  << _Name << std::endl;
}*/

FragTrap::FragTrap(FragTrap const &rhs): ClapTrap(rhs) {}

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
	std::cout << "FragTrap " << _Name << "Being copy from an ov.Operator" << std::endl;
	return (*this);
}

//METHODS
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