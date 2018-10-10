#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

// EXCEPTIONS

Intern::FormException::FormException(FormException const &rhs) {
	*this = rhs;
}

Intern::FormException			&Intern::FormException::operator = (FormException const &rhs) {
	(void) rhs;
	return (*this);
}

const char						*Intern::FormException::what() const throw() {
	return ("Invalid Form - Exception called");
}

// CONSTRUCTORS

Intern::Intern(Intern const &rhs) {
	*this = rhs;
}

// OPERATORS

Intern							&Intern::operator = (Intern const &rhs) {
	(void)rhs;
	return (*this);
}

// METHODS

Form							*Intern::makeForm(std::string Name, std::string Target) {
	try {
		if (Name == "PresidentialPardonForm") {
			std::cout << "Intern creates " << Name << std::endl;
			return (new PresidentialPardonForm(Target));
		} else if (Name == "ShrubberyCreationForm") {
			std::cout << "Intern creates " << Name << std::endl;
			return (new ShrubberyCreationForm(Target));
		} else if (Name == "RobotomyRequestForm") {
			std::cout << "Intern creates " << Name << std::endl;
			return (new RobotomyRequestForm(Target));
		} else {
			throw FormException();
		}
	} catch(std::exception &error) {
		std::cerr << "Intern couldn't create the form, reason : " << error.what()
				  << std::endl;
	}
	return (NULL);
}