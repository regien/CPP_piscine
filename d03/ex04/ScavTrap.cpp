#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

const std::string	ScavTrap::_semi_random_challengues[5] =
{
	"Dance Competition",
	"Kill 500 Spiderants",
	"Sing 'La Macarena'",
	"Eat a Banana",
	"Jump off a bridge"
};

//CONSTRUCTORS
ScavTrap::ScavTrap()
{
	_Name = "Handsome_noone";
	_Hit_Points = 100;
	_Energy_Points = 50;
	_Lv = 1;
	_Melle_atck_dmg = 20;
	_Ranged_atck_dmg = 15;
	_Max_EP = 50;
	_Max_HP = 100;
	_Armor_dmg_reduc = 3;
	std::cout << "Constructing ScavTrap named Handsome_noone" << std::endl;
}

ScavTrap::ScavTrap(std::string Name):
ClapTrap(Name)
{
	_Hit_Points = 100;
	_Energy_Points = 50;
	_Lv = 1;
	_Melle_atck_dmg = 20;
	_Ranged_atck_dmg = 15;
	_Max_EP = 50;
	_Max_HP = 100;
	_Armor_dmg_reduc = 3;
	std::cout << "Constructing ScavTrap named" <<
			  Name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs) {}

ScavTrap::~ScavTrap()
{
	std::cout << "<" << _Name << "> : I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	std::cout << "Destroying <ScavTrap " << _Name << ">" << std::endl;
}

// OPERATORS
ScavTrap			&ScavTrap::operator = (const ScavTrap &data)
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
	std::cout << "ScavTrap " << _Name << "Being copy from an ov.Operator" << std::endl;
	return (*this);
}

//METHODS

void				ScavTrap::challengueNewcomer(std::string const & target)
{
	std::cout << "<ScavTrap " << _Name << "> Challengues " << target
			  << " to " << _semi_random_challengues[rand() % 5] << std::endl;
}

