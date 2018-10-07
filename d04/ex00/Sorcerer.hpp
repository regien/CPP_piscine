#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include <fstream>
# include "Victim.hpp"

class	Sorcerer
{
	private:
		std::string			_Name;
		std::string			_Title;
		Sorcerer(void);

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer & rhs);
		~Sorcerer();

		Sorcerer			&operator = (const Sorcerer &rhs);
		
		void				polymorph(const Victim &target) const;

		//getters
		std::string			get_Name() const;
		std::string			get_Title() const;
};

std::ostream	&operator << (std::ostream &lhs, const Sorcerer &rhs);

#endif

