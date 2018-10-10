#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

// CONSTRUCTORS

PresidentialPardonForm::PresidentialPardonForm(std::string Target) :
Form("PresidentialPardonForm", 25, 5), _Target(Target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) :
Form(rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()), _Target(rhs.getTarget()) {
	*this = rhs;
}

// OPERATORS

PresidentialPardonForm			&PresidentialPardonForm::operator = (PresidentialPardonForm const &rhs) {
	Form::operator = (rhs);
	return (*this);
}

// METHODS

void							PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	Form::execute(executor);
	std::cout << _Target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

// GETTERS

std::string						const PresidentialPardonForm::getTarget() const {
	return (_Target);
}

// STREAM

std::ostream					&operator << (std::ostream &lfs, PresidentialPardonForm const &rhs) {
	lfs << "PresindetialPardonForm Target: " << rhs.getTarget();
	return (lfs);
}