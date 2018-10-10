#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <time.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string const		_Target;
		static bool				_Set_Rand;

		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm() {}


		// operators
		RobotomyRequestForm		&operator = (RobotomyRequestForm const & rhs);

		// methods
		void						execute(Bureaucrat const & executor) const;

		// Getters
		std::string const			getTarget() const;
};

std::ostream		&operator << (std::ostream &lfs, RobotomyRequestForm const &rhs);

#endif

