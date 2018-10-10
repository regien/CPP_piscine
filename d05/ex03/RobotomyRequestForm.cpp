#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

// CONSTRUCTORS

bool	RobotomyRequestForm::_Set_Rand = false;

RobotomyRequestForm::RobotomyRequestForm(std::string Target) :
Form("RobotomyRequestForm", 72, 45), _Target(Target) {
	if (!_Set_Rand) {
		_Set_Rand = true;
		srand(time(NULL));
	}
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) :
Form(rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()), _Target(rhs.getTarget()) {
	*this = rhs;
}

// OPERATORS

RobotomyRequestForm			&RobotomyRequestForm::operator = (RobotomyRequestForm const &rhs) {
	Form::operator = (rhs);
	return (*this);
}

// METHODS

void							RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	Form::execute(executor);
	// 50 % chance
	if (rand() % 2) {
		std::cout << "* grgr grgrg grgrg grgrgr *" << std::endl;
	} else {
		std::cout << "*OH NO, UNEXPECTED FAILURE*" << std::endl;
	}
}

// GETTERS

std::string						const RobotomyRequestForm::getTarget() const {
	return (_Target);
}

// STREAM

std::ostream					&operator << (std::ostream &lfs, RobotomyRequestForm const &rhs) {
	lfs << "RobotomyRequestForm Target: " << rhs.getTarget();
	return (lfs);
}