#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
# include <sstream>
# include "Brain.hpp"

class	Human
{
	Brain				_cerebro;

	public:
		Human();
		~Human();

		std::string		identify();
		Brain			&getBrain();
};

#endif