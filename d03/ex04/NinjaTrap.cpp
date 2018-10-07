#include "NinjaTrap.hpp"

//CONSTRUCTORS
NinjaTrap::NinjaTrap()
{
	_Name = "Handsome_noone";
	_Hit_Points = 60;
	_Energy_Points = 120;
	_Lv = 1;
	_Melle_atck_dmg = 60;
	_Ranged_atck_dmg = 5;
	_Max_EP = 60;
	_Max_HP = 120;
	_Armor_dmg_reduc = 0;
	std::cout << "Constructing NinjaTrap named Handsome_noone" << std::endl;
}

NinjaTrap::NinjaTrap(std::string Name):
ClapTrap(Name)
{
	_Hit_Points = 60;
	_Energy_Points = 120;
	_Lv = 1;
	_Melle_atck_dmg = 60;
	_Ranged_atck_dmg = 5;
	_Max_EP = 60;
	_Max_HP = 120;
	_Armor_dmg_reduc = 0;
	std::cout << "Constructing NinjaTrap named" <<
			  Name << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &rhs): ClapTrap(rhs) {}

NinjaTrap::~NinjaTrap()
{
	std::cout << "<" << _Name << "> : I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	std::cout << "Destroying <NinjaTrap " << _Name << ">" << std::endl;
}

// OPERATORS
NinjaTrap			&NinjaTrap::operator = (const NinjaTrap &data)
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
	std::cout << "NinjaTrap " << _Name << "Being copy from an ov.Operator" << std::endl;
	return (*this);
}

//METHODS
void				NinjaTrap::ninjaShoeBox(NinjaTrap & target)
{
	std::cout << "<NinjaTrap " << _Name << "> ANOTHER NINJA!,  One of us must die! "
			  << "and it's gonna be you " << target._Name << "!" << std::endl;
}

void				NinjaTrap::ninjaShoeBox(FragTrap & target)
{
	std::cout << "<NinjaTrap " << _Name << "> Prepare to die you filthy creature - to - "
			  << target.get_name() << std::endl; 
}

void				NinjaTrap::ninjaShoeBox(ScavTrap & target)
{
	std::cout << "<NinjaTrap " << _Name << "> I don't like those things in your head - to - "
			  << target.get_name()  << std::endl;
}

