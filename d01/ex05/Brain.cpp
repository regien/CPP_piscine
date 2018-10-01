#include "Brain.hpp"

Brain::Brain() {};

Brain::~Brain() {};

/*
** This is a constant pointer to the object
** if i return `holder` by itself is just gonna
** return the pointer of the stream. if i return with his
** attribute .str() is gonna return his content.
*/

std::string	Brain::identify() const
{
	std::stringstream	holder;
	holder << this;
	return (holder.str());
}
