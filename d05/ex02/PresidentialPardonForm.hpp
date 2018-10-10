#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const		_Target;

		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string Target);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm() {}


		// operators
		PresidentialPardonForm		&operator = (PresidentialPardonForm const & rhs);

		// methods
		void						execute(Bureaucrat const & executor) const;

		// Getters
		std::string const			getTarget() const;
};

std::ostream		&operator << (std::ostream &lfs, PresidentialPardonForm const &rhs);

#endif