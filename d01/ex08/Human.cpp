#include "Human.hpp"

typedef	void	(Human::*humanptr)(std::string const &target);

void	Human::meleeAttack(std::string const &target)
{
	std::cout << "Execution Melee Attack to " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << "Execution Ranged Atack to " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << "Execution Intimidating Atack to " << target << std::endl;
}
	

void	Human::action(std::string const &action_name, std::string const &target)
{
	int					i = -1;

	const std::string	actions[3] = {
		"melee",
		"ranged",
		"shout"
	};

	humanptr			fptr[3] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	while (++i < 3)
		if (action_name == actions[i])
			(this->*(fptr[i]))(target);
}