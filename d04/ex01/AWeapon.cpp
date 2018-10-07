#include "AWeapon.hpp"

//CONSTRUCTORS
AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
_Name(name), _Apcost(apcost), _Damage(damage)
{}

AWeapon::AWeapon(AWeapon const & rhs)
{
	*this = rhs;
}

//OPERATORS

AWeapon					&AWeapon::operator = (AWeapon const & rhs)
{
	_Name = rhs.get_Name();
	_Apcost = rhs.get_Apcost();
	_Damage = rhs.get_Damage();
	return (*this);
}

//METHODS

void					AWeapon::attack() const 
{}

//GETTERS
std::string				AWeapon::get_Name() const
{
	return (_Name);
}

int						AWeapon::get_Apcost() const
{
	return (_Apcost);
}

int						AWeapon::get_Damage() const
{
	return (_Damage);
}