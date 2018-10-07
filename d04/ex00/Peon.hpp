#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

# include <string>
# include <iostream>
# include <fstream>

class	Peon : public Victim
{
	private:
		Peon();

	public:
		Peon(std::string Name);
		Peon(const Peon &rhs);
		~Peon();

		Peon			&operator = (const Peon &rhs);

		void			getPolymorphed() const;
};

//std::ostream	&operator << (std::ostream &lhs, const Peon &rhs);

#endif

