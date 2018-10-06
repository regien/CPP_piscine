#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		const static std::string	_semi_random_challengues[5];
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();
		ScavTrap					&operator = (const ScavTrap &data);

		void						challengueNewcomer(std::string const & target);
};

#endif

