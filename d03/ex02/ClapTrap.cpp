#include "ClapTrap.hpp"
#include <string>
#include <iostream>

bool				ClapTrap::_time_rnd_set = false;

const std::string	ClapTrap::_melee_atacks[5] =
{
	"Corrosive Axe",
	"Broken Bone",
	"Knife",
	"Bladed pistol",
	"butt of a gun"
};

const std::string	ClapTrap::_ranged_attacks[5] =
{
	"Assault Rifle",
	"Electrical Sniper Rifle",
	"Explosive Coco",
	"Dart",
	"Corrosive Sniper"
};


//CONSTRUCTORS
ClapTrap::ClapTrap()
{
	if (!_time_rnd_set)
	{
		srand(time(0));
		_time_rnd_set = true;
	}
	std::cout << "Constructing ClapTrap named Handsome_noone" << std::endl;
}

ClapTrap::ClapTrap(std::string Name):
_Name(Name)
{
	if (!_time_rnd_set)
	{
		srand(time(0));
		_time_rnd_set = true;
	}
	std::cout << "Constructing ClapTrap named" <<
			  Name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs) :
_Name(rhs._Name + " Copy")
{
	if (this != &rhs)
		*this = rhs;
	std::cout << "Replicating a ClapTrap, new name "
			  << _Name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destroying <ClapTrap " << _Name << ">" << std::endl;
}

// OPERATORS
ClapTrap			&ClapTrap::operator = (const ClapTrap &data)
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
void				ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "Take two bullets, then call me in the morning. - ClapTrap " << _Name
			  << " attacks " << target << " at range with " << _ranged_attacks[rand() % 5]
			  << " , causing " << _Ranged_atck_dmg << " Points of Damage!!" << std::endl;
}

void				ClapTrap::melleaAttack(std::string const & target)
{
	std::cout << "Ha ha ha! Fall before your robot overlord! - ClapTrap " << _Name
			  << " attacks " << target << " at melle with " << _melee_atacks[rand() % 5]
			  << " , causing " << _Melle_atck_dmg << " Points of Damage!!" << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount)
{
	int		dmg_calculator;
	int		HP_calculator;

	if ((dmg_calculator = amount - _Armor_dmg_reduc) < 0)
		dmg_calculator = 0;
	std::cout << "<ClapTrap " << _Name << "> takes " << dmg_calculator << " Points of damage!"
			  << std::endl;
	if ((HP_calculator = _Hit_Points - dmg_calculator) <= 0)
	{
		std::cout << "<ClapTrap" << _Name << "> No fair! I wasn't ready. " 
				  << "*HP to zero*" << std::endl;
		_Hit_Points = 0;
	}
	else
		_Hit_Points -= dmg_calculator;
	
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	int		HP_calculator = 0;
	int		recover_amt = 0;

	if ((HP_calculator = _Hit_Points + amount) >= _Max_HP)
	{
		HP_calculator = _Max_HP;
		recover_amt = HP_calculator - _Hit_Points;
	}
	std::cout << "<ClapTrap " << _Name << "> * Recovered " << recover_amt
			  << " of HP *" << std::endl;
	_Hit_Points = _Hit_Points + recover_amt;
}

