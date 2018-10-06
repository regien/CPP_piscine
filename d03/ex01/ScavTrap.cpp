#include "ScavTrap.hpp"

bool				ScavTrap::_time_rnd_set = false;

const std::string	ScavTrap::_melee_atacks[5] =
{
	"Corrosive Axe",
	"Broken Bone",
	"Knife",
	"Bladed pistol",
	"butt of a gun"
};

const std::string	ScavTrap::_ranged_attacks[5] =
{
	"Assault Rifle",
	"Electrical Sniper Rifle",
	"Explosive Coco",
	"Dart",
	"Corrosive Sniper"
};

const std::string	ScavTrap::_semi_random_challengues[5] =
{
	"Dance Competition",
	"Kill 500 Spiderants",
	"Sing 'La Macarena'",
	"Eat a Banana",
	"Jump off a bridge"
};

//CONSTRUCTORS
ScavTrap::ScavTrap() :
_Name("Handsome_noone"), _Hit_Points(100), _Energy_Points(50),
_Lv(1), _Melle_atck_dmg(20), _Ranged_atck_dmg(15),
_Max_EP(50), _Max_HP(100), _Armor_dmg_reduc(3)
{
	if (!_time_rnd_set)
	{
		srand(time(0));
		_time_rnd_set = true;
	}
	std::cout << "Constructing ScavTrap named Handsome_noone" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) :
_Name(Name), _Hit_Points(100), _Energy_Points(50),
_Lv(1), _Melle_atck_dmg(20), _Ranged_atck_dmg(15),
_Max_EP(50), _Max_HP(100), _Armor_dmg_reduc(3)
{
	if (!_time_rnd_set)
	{
		srand(time(0));
		_time_rnd_set = true;
	}
	std::cout << "Constructing ScavTrap named" <<
			  Name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) :
_Name(rhs._Name + " Copy")
{
	*this = rhs;
	std::cout << "Replicating a ScavTrap, new name "
			  << _Name << std::endl;
}

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
	return (*this);
}

//METHODS
void				ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Take two bullets, then call me in the morning. - ScavTrap " << _Name
			  << " attacks " << target << " at range with " << _ranged_attacks[rand() % 5]
			  << " , causing " << _Ranged_atck_dmg << " Points of Damage!!" << std::endl;
}

void				ScavTrap::melleaAttack(std::string const & target)
{
	std::cout << "Ha ha ha! Fall before your robot overlord! - ScavTrap " << _Name
			  << " attacks " << target << " at melle with " << _melee_atacks[rand() % 5]
			  << " , causing " << _Melle_atck_dmg << " Points of Damage!!" << std::endl;
}

void				ScavTrap::takeDamage(unsigned int amount)
{
	int		dmg_calculator;
	int		HP_calculator;

	if ((dmg_calculator = amount - _Armor_dmg_reduc) < 0)
		dmg_calculator = 0;
	std::cout << "<ScavTrap " << _Name << "> takes " << dmg_calculator << " Points of damage!"
			  << std::endl;
	if ((HP_calculator = _Hit_Points - dmg_calculator) <= 0)
	{
		std::cout << "<ScavTrap" << _Name << "> No fair! I wasn't ready. " 
				  << "*HP to zero*" << std::endl;
		_Hit_Points = 0;
	}
	else
		_Hit_Points -= dmg_calculator;
	
}

void				ScavTrap::beRepaired(unsigned int amount)
{
	int		HP_calculator = 0;
	int		recover_amt = 0;

	if ((HP_calculator = _Hit_Points + amount) >= _Max_HP)
	{
		HP_calculator = _Max_HP;
		recover_amt = HP_calculator - _Hit_Points;
	}
	std::cout << "<ScavTrap " << _Name << "> * Recovered " << recover_amt
			  << " of HP *" << std::endl;
	_Hit_Points = _Hit_Points + recover_amt;
}

void				ScavTrap::challengueNewcomer(std::string const & target)
{
	std::cout << "<ScavTrap " << _Name << "> Challengues " << target
			  << " to " << _semi_random_challengues[rand() % 5] << std::endl;
}

int					ScavTrap::get_Max_hp() const
{
	return (_Max_HP);
}

int					ScavTrap::get_Max_ep() const
{
	return (_Max_EP);
}

