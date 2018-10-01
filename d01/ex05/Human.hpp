#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
# include <sstream>
# include "Brain.hpp"

/*
** a const member never modifies data member in the object
*/

class	Human
{
	const Brain				_cerebro;

	public:
		Human();
		~Human();

		std::string			identify() const;
		const Brain			&getBrain() const;
};

#endif