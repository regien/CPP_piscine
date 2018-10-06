#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap: public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &copy);
		~NinjaTrap();
		NinjaTrap					&operator = (const NinjaTrap &data);

		void						ninjaShoeBox(NinjaTrap & target);
		void						ninjaShoeBox(ScavTrap & target);
		void						ninjaShoeBox(FragTrap & target);
};

#endif