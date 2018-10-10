#include <cstdlib>
#include <fstream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

// CONSTRUCTORS

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) :
Form("ShrubberyCreationForm", 145, 137), _Target(Target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) :
Form(rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()), _Target(rhs.getTarget()) {
	*this = rhs;
}

// OPERATORS

ShrubberyCreationForm			&ShrubberyCreationForm::operator = (ShrubberyCreationForm const &rhs) {
	Form::operator = (rhs);
	return (*this);
}

// METHODS

void							ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	std::ofstream		file;

	Form::execute(executor);
	file.open(std::string(_Target + "_shrubbery").c_str());
    file << "/\\/\\/\\\n/\\/\\/\\\n/\\/\\/\\\n||||||" << std::endl;
}

// GETTERS

std::string						const ShrubberyCreationForm::getTarget() const {
	return (_Target);
}

// STREAM

std::ostream					&operator << (std::ostream &lfs, ShrubberyCreationForm const &rhs) {
	lfs << "PresindetialPardonForm Target: " << rhs.getTarget();
	return (lfs);
}