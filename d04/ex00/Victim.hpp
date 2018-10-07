#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>
# include <fstream>

class	Victim
{
	protected:
		std::string			_Name;

		Victim();

	public:
		Victim(std::string Name);
		Victim(const Victim &rhs);
		~Victim();
		
		Victim				&operator = (const Victim &rhs);

		//methods
		virtual void		getPolymorphed() const;

		//getters
		std::string			get_Name() const;		
};

std::ostream	&operator << (std::ostream &lhs, const Victim &rhs);

#endif