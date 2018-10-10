#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string const		_Target;

		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string Target);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm() {}


		// operators
		ShrubberyCreationForm		&operator = (ShrubberyCreationForm const & rhs);

		// methods
		void						execute(Bureaucrat const & executor) const;

		// Getters
		std::string const			getTarget() const;
};

std::ostream		&operator << (std::ostream &lfs, ShrubberyCreationForm const &rhs);

#endif