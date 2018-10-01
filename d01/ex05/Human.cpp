#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

std::string		Human::identify() const
{
	return (_cerebro.identify());
}

const Brain		&Human::getBrain() const
{
	return	(_cerebro);
}