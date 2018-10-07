#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		static const std::string	_semi_random_attacks[5];

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		~FragTrap();
		FragTrap					&operator = (const FragTrap &data);

		void						vaulthunter_dot_exe(std::string const &target);
};

#endif

