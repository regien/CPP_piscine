#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

std::string		Human::identify()
{
	return (_cerebro.identify());
}

Brain			&Human::getBrain()
{
	return	(_cerebro);
}